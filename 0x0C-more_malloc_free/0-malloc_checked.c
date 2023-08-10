#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* malloc_checked - reserve memory using the malloc function
* @b: size of memory
* Return: reference to freshly allocated memory
*/
void *malloc_checked(unsigned int b)
{
	char *output;

	output = malloc(b);
	if (output == NULL)
		exit(98);
	else
		return (output);
}

