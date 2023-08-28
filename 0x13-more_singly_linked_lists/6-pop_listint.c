#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* pop_listint - Removes the initial node of a linked list
* @head: Reference to the initial element in the linked list
*
* Return: value inside the elements that was deleted,
* or 0 if the list is empty
*/
int pop_listint(listint_t **head)
{
listint_t *temp;
int num;

if (!head || !*head)
return (0);

num = (*head)->n;
temp = (*head)->next;
free(*head);

*head = temp;

return (num);
}
