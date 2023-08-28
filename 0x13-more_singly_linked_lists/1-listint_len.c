#include <stdio.h>
#include "lists.h"

/*
*listint_len - calculates and provides the count of elements within a linked list
* @h: linked list of type listint_t to traverse
* next - Reference to the subsequent node in the list
* Return: number of nodes
*/


size_t listint_len(const listint_t *h)
{
size_t count = 0;
while (h != NULL)
{
h = h->next;
count++;
}
return (count);
}
