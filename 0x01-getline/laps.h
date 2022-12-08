#ifndef LAPS_H
#define LAPS_H

#include <stddef.h>
#include <stdio.h>

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

void race_state(int *id, size_t size);

#endif
