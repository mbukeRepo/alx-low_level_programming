#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node at a certain index
 * @head: pointer to first node
 * @index: index of insertion
 * Return: 1 for success -1 for failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *copy = *head;
listint_t *tmp;
unsigned int node = 0;

if (copy == NULL)
{
return (-1);
}

if (index == 0)
{
*head = (*head)->next;
free(copy);
return (1);
}

while (node < (index - 1))
{
if (copy->next == NULL)
{
return (-1);
}
copy = copy->next;
}
tmp = copy->next;
copy->next = tmp->next;
free(tmp);
return (1);
}
