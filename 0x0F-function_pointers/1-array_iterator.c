#include "function_pointers.h"


/**
* array_iterator - applies the function to every element within the array
* @array:the array
* @size:the size of the array
* @action: operation to carry out on every element of array
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;


if (array && action)
{
i = 0;
while (i < size)
{
action(array[i]);
i++;
}
}
}
