#include <stdlib.h>
#include "main.h"
#include <stdio.h>


/**
* *array_range - generate an integer array
* @min: lowest range of stored values
* @max: highest range of stored values
*
* Return: pointer to the new array
*/
int *array_range(int min, int max)
{
	int *result;
	int i;

	/* if min is greater than max, return NULL */
	if (min > max)
		return (NULL);

	/* allocate memory for array */
	result = malloc(sizeof(int) * (max - min + 1));
	if (result == NULL)
		return (NULL);

	/* fill array with values from min to max */
	for (i = 0; i <= max - min; i++)
		result[i] = min + i;

	return (result);
}
