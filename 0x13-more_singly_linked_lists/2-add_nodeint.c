#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - accepts a double pointer pointing to the head of a linked list
 * @head: reference to the initial node in the list
 * @n: input integer value in the new node
 *
 * Return: address to the new node, or NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_node = (listint_t *) malloc(sizeof(listint_t));
if (new_node == NULL)
{
return (NULL);
}
new_node->n = n;
new_node->next = *head;
*head = new_node;
return (new_node);
}
