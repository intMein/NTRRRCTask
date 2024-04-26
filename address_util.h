#pragma once

#include <netinet/in.h>

int resolve_endpoint(struct sockaddr_in* address, const char* host, const char* port);