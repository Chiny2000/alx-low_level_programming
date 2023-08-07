#include "main.h"
#include <stdlib.h>
/**
*create_array - creates array
*@size: array size
*@c: character to assign
*Return: pointer to the array, NULL if fail
*/

char *create_array(unsigned int size, char c)
{
	int i;
	char *arr;
	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
	return (NULL);

for (i = 0; i < size; i++)
arr[i] = c;
return (arr);
}
