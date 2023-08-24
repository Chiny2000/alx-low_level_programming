#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Inserts a fresh node at the start of a linked list
 * @head: Pointer to a pointer pointing to the list_t list
 * @str: Fresh string to incorporate into the node
 * Return: The memory location of the new element, or NULL in case of failure
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
