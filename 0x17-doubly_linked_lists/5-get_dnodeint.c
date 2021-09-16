#include "lists.h"
/**
 * get_dnodeint_at_index - gets the address of the node at index
 * @head: pointer to the first node
 * @index: index of the node to retrive
 * Return: pointer to the node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i = 0;
dlistint_t *curr = head;
while (i < index)
{
curr = curr->next;
i++;
}
return (curr);
}
