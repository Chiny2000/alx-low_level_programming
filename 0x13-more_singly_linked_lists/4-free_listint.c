#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* free_listint - deallocates a linked list
* @head: listint_t that needs to be released
*/
void free_listint(listint_t *head)
{
listint_t *temp;

while (head)
{
temp = head->next;
free(head);
head = temp;
}
}
