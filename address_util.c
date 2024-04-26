#include "address_util.h"

#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int resolve_endpoint(struct sockaddr_in* address, const char* host, const char* port) {
    struct addrinfo hints = {0};

    struct addrinfo* results = NULL;

    if (getaddrinfo(host, port, &hints, &results) != 0) {
        return -1;
    }

    memcpy(address, results->ai_addr, sizeof(struct sockaddr_in));

    return 0;
}