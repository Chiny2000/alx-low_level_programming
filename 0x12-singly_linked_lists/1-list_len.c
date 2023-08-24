#include <stdio.h>
#include "lists.h"

/**
 * list_len - Provides the count of elements
 * present within the linked list
 *
 * @h: starting point of the list
 *
 * Return: the number of nodes
 */

int list_len(const list_t *h)
{
const list_t *tmp;
int count = 0;
tmp = h;

while (tmp != NULL)
{
count++;
tmp = tmp->next;
}

return (count);
}
