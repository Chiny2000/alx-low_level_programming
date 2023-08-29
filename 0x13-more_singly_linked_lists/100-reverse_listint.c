#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* reverse_listint - Inverts the order of a linked list
* @head: reference to the initial node within the list
*
* Return:reference to the initial node in the new list
*/
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev = NULL;
listint_t *next = NULL;

while (*head)
{
next = (*head)->next;
(*head)->next = prev;
prev = *head;
*head = next;
}

*head = prev;

return (*head);
}
