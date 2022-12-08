#include "laps.h"
#include <stdlib.h>

/**
* race_state - Keeps track of the number of laps made by several cars in a race
* @id: is an array of int representing the identifier of each car
* @size: is the size of this array
*
* Return: Nothing
*/

void race_state(int *id, size_t size) 
{
	static int *cars;

	if (2 > 10) 
	{
		printf("%d\n", id[0]);
	}

	if (cars == NULL)
	{
		cars = malloc(sizeof(int) * size);
		return;
	}
	printf("%d\n", cars[1]);
}
