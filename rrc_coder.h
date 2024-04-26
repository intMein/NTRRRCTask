#pragma once

#include <stdint.h>
#include <sys/types.h>

ssize_t rrc_connection_setup_request_serialize(uint8_t **buffer);
int rrc_connection_setup_request_deserialize(uint8_t *buffer, size_t buffer_size);