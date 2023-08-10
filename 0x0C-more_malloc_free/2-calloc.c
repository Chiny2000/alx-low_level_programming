#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* _calloc - reserves memory for an array using the calloc function
* @nmemb: count of array members
* @size: dimensions of array
*
* Return: pointer to the newly allocated memory.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *a;
unsigned int b;


if (nmemb == 0 || size == 0)
return (NULL);
a = malloc(nmemb * size);
if (a == NULL)
return (NULL);
for (b = 0; b < (nmemb * size); b++)
a[b] = 0;
return (a);
}
