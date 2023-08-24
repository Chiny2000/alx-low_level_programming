#include <stdio.h>
#include "lists.h"

/**
*print_list - determine all the elements of linked list.
*@h: List's title
*Return: the count of nodes.
*/

int print_list(const list_t *h)
{
const list_t *tmp;
int count = 0;
tmp = h;

while (tmp != NULL)
{
if (tmp->str == NULL)
{
printf("[0] (nil)\n");
}
else
{
printf("[%d] %s\n", tmp->len, tmp->str);
}

count++;
tmp = tmp->next;
}

return (count);
}
