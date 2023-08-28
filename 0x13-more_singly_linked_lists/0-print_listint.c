#include <stdio.h>
#include "lists.h"

/**
 * print_listint -  displays the elements present in a linked list
 * @h: It takes the headnode as input
 * Return: the count
 */

size_t print_listint(const listint_t *h)
{
size_t count = 0;
while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
count++;
}
return (count);
}

