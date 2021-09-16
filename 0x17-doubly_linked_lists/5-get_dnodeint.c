#include "lists.h"
/**
 * get_dnodeint_at_index - gets the address of the node at index
 * @head: pointer to the first node
 * @index: index of the node to retrive
 * Return: pointer to the node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *curr = head;
while (index != 0)
{
if (curr == NULL)
return (NULL)
curr = curr->next;
index--;
}
return (curr);
}
