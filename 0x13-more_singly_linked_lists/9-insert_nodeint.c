#include "lists.h"
/**
 * insert_nodeint_at_index - inserts node at a certain index
 * @head: first node of the list
 * @idx: index of insertion
 * @n: data of the node
 * Return: pointer to the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new;
listint_t *copy = *head;
unsigned int i = 0;
new = malloc(sizeof(listint_t));
if (new == NULL)
{
return (NULL);
}
new->n = n;
if (idx == 0)
{
new->next = copy;
*head = new;
return (new);
}
while (i < (idx - 1))
{
if (copy == NULL || copy->next == NULL)
{
return (NULL);
}
copy = copy->next;
i++;
}
new->next = copy->next;
copy->next = new;
return (new);
}
