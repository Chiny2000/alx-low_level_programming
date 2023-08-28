#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
* get_nodeint_at_index - returns the node at a certain index in a linked list
* @head: initial node within the linked list
* @index: index for the node to be retrieved
*
* Return: pointer to the node we're looking for, or NULL
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;
listint_t *temp = head;

while (temp && i < index)
{
temp = temp->next;
i++;
}

return (temp ? temp : NULL);
}
