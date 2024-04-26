#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netinet/sctp.h>
#include <netdb.h>
#include <unistd.h>
#include <pthread.h>
#include <signal.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "rrc_parser.h"

#define BACKLOG 1024
#define MAX_BUFFER 512

int make_server(uint16_t port)
{
    int fd = socket(AF_INET, SOCK_STREAM, IPPROTO_SCTP);

    struct sockaddr_in host = {0};

    host.sin_port = htons(port);
    host.sin_family = AF_INET;
    host.sin_addr.s_addr = INADDR_ANY;

    int reuse_enable = 1;

    if (setsockopt(fd, SOL_SOCKET, SO_REUSEADDR, &reuse_enable, sizeof(int)) != 0) {
        perror("setsockopt");
        exit(0);
    }

    if (bind(fd, (struct sockaddr*)&host, sizeof(host)) != 0) {
        perror("bind");
        exit(0);
    }

    if (listen(fd, BACKLOG) != 0) {
        perror("listen");
        exit(0);
    }

    return fd;
}

int rrc_receive(int fd, char *buffer, size_t size)
{
    return sctp_recvmsg(fd, buffer, size, NULL, NULL, NULL, NULL);
}

int rrc_send(int fd, const char *buffer, size_t size)
{
    return sctp_sendmsg(fd, buffer, size, 0, 0, 0, 0, 0, 0, 0);
}

void* client_worker(void *args)
{
    int fd = (int) (size_t)args;

    char buffer[MAX_BUFFER];

    int result = rrc_receive(fd, buffer, MAX_BUFFER);

    if (result < 0) {
        perror("rrc_receive");
        return 0;
    }

    puts("Got a package!");

    if (rrc_connection_setup_request_deserialize((uint8_t*) buffer, result) == 0) {
        rrc_send(fd, "ok", 2); // у меня так и не получилось разобраться с RRC Connection Complete, поэтому буду посылать хотя бы это
    }

    close(fd);

    return NULL;
}

int main()
{
    signal(SIGPIPE, SIG_IGN);
    int server_fd = make_server(6666);

    while (1) {
        int client_fd = accept(server_fd, (struct sockaddr*)NULL, 0);

        if (client_fd <= 0) continue;

        pthread_t thread;

        pthread_create(&thread, NULL, client_worker, (void*) (size_t)client_fd);

        pthread_detach(thread);
    }
}
