#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - Inserts a fresh node at the list's tail.
 * @head: Pointer pointing to the initial node of the list.
 * @str: Pointer to the string for insertion into the new node.
 * @_str_len: calculates or holds the length of a string
 * Return: Pointer to the newly created node.
 **/

int _str_len(const char *str)
{
if (*str == '\0')
return (0);

return (1 + _str_len(str + 1));
}

/**
 * add_node_end - adds a new node the begining
 * of the list
 *
 * @head: head of the list
 * @str: string value
 * Return: the new node that has been added
 */

list_t *add_node_end(list_t **head, const char *str)
{
int length = _str_len(str);
char *duplicated_string = strdup(str);
list_t *current = *head;
list_t *new_node = malloc(sizeof(list_t));



if (new_node == NULL)
return (NULL);

new_node->len = length;
new_node->str = duplicated_string;
new_node->next = NULL;

if (*head == NULL)
{
*head = new_node;
return (new_node);
}

while (current->next != NULL)
{
current = current->next;
}

current->next = new_node;
return (new_node);
}
