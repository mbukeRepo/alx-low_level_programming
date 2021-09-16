#include "lists.h"

/**
 * add_dnodeint_end - adds a node at the end of the list
 * @head: first element of the list
 * @n: data
 * Return: new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new, *tmp;
tmp = *head;
new = malloc(sizeof(dlistint_t));
new->n = n;
new->next = NULL;

if (*head == NULL)
{
new->prev = NULL;
*head = new;
return (new);
}
while (tmp->next != NULL)
tmp = tmp->next;

tmp->next = new;
new->prev = tmp;
return (new);
}
