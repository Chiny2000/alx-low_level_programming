#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
* find_listint_loop - Determines the presence of a loop in a linked list
* @head: linked list to be Linked list to be searchedsearched
* Return: The address of the node where the loop begins, or NULL if none exists
*/
listint_t *find_listint_loop(listint_t *head)
{
listint_t *slow = head;
listint_t *fast = head;

if (!head)
return (NULL);

while (slow && fast && fast->next)
{
fast = fast->next->next;
slow = slow->next;
if (fast == slow)
{
slow = head;
while (slow != fast)
{
slow = slow->next;
fast = fast->next;
}
return (fast);
}
}

return (NULL);
}
