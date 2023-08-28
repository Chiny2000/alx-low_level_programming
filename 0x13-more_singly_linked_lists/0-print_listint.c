#include <stdio.h>
#include "lists.h"

/**
 * print_listint -  displays the elements present in a linked list
 * @headnode: It takes the headnode as input
 * Return: the count of nodes
 */

int print_listint(const listint_t *headnode)
{
int count = 0;

while (headnode)
{
printf("%d\n", headnode->n);
count++;
headnode = headnode->next;
}

return (count);
}
