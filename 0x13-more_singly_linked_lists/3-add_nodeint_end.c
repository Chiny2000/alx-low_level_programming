#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* add_nodeint_end - adds a new node at the tail of the linked list
* @head: pointer to the first element in the list
* @n: integer value input in the new element
*
* Return: the address of the new node, or NULL if it fails
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *temp2;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}

	temp2 = *head;
	while (temp2->next)
		temp2 = temp2->next;
	temp2->next = temp;
	return (temp);
}
