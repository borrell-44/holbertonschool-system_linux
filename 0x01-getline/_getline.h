#ifndef GETLINE_H
#define GETLINE_H

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define READ_SIZE 11

char *_getline(const int fd);

#endif
