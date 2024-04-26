#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netinet/sctp.h>
#include <netdb.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "rrc_coder.h"
#include "address_util.h"

#define ACK_PACKET "ok"
#define ACK_PACKET_SIZE 2

typedef struct rrc_client_s {
    int fd;
} rrc_client_t;

void rrc_client_init(rrc_client_t *client)
{
    memset(client, 0, sizeof(rrc_client_t));
}

int rrc_client_connect(rrc_client_t *client, const char *host, const char *port)
{
    client->fd = socket(AF_INET, SOCK_STREAM, IPPROTO_SCTP);

    if (client->fd < 0) {
        return -1;
    }

    struct sockaddr_in address = {0};

    if (resolve_endpoint(&address, host, port) != 0) {
        return -1;
    }

    if (connect(client->fd, (struct sockaddr*)&address, sizeof(struct sockaddr_in)) != 0) {
        return -1;
    }

    return 0;
}

int rrc_client_send(rrc_client_t *client, const uint8_t *buffer, size_t size)
{
    return sctp_sendmsg(client->fd, buffer, (int) size, 0, 0, 0, 0, 0, 0, 0);
}

int rrc_client_receive(rrc_client_t *client, uint8_t *buffer, size_t size)
{
    return sctp_recvmsg(client->fd, buffer, (int) size, 0, 0, 0, 0);
}

int main(void) {
    rrc_client_t client;

    rrc_client_init(&client);

    if (rrc_client_connect(&client, "127.0.0.1", "6666") != 0) {
        perror("rrc_client_connect");
        return 0;
    }

    uint8_t *buffer;

    ssize_t buffer_sz = rrc_connection_setup_request_serialize(&buffer);

    int result = rrc_client_send(&client, buffer, buffer_sz);

    if (result < 0) {
        perror("send");
        return 0;
    }

    char receive_buffer[32];

    result = rrc_client_receive(&client, (uint8_t*) receive_buffer, sizeof(buffer));

    if (result < 2) {
        puts("invalid buffer received!");
        return 0;
    }

    if (strncmp(receive_buffer, ACK_PACKET, ACK_PACKET_SIZE) == 0) {
        puts("Handshake success!");
    }

    return 0;
}
