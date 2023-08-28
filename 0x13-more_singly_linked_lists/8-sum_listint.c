#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
* sum_listint - computes the sum of all input in a listint_t list
* @head: initial node in the linked list
*
* Return: resulting sum
*/
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *temp = head;

while (temp)
{
sum += temp->n;
temp = temp->next;
}

return (sum);
}
