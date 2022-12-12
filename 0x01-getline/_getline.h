#ifndef GETLINE_H
#define GETLINE_H

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define READ_SIZE 500

/**
 * struct list_c - singly linked list
 * @id: id of the car
 * @laps: number of laps a car has done
 * @next: points to the next node
 *
 * Description: singly linked of cars laps
 */

/*typedef struct list_c
{
    int id;
    int laps;
    struct list_c *next;
};*/

char *_getline(const int fd);

#endif
