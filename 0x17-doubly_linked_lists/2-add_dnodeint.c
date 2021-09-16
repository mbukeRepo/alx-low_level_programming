#include "lists.h"

/**
 * add_dnodeint - adds a node at the beginning of the list
 * @head: the pointer to first elements
 * @n: data to insert to the list
 * Return: address of the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new;
new = malloc(sizeof(dlistint_t));
if (!new)
return (NULL);
new->n = n;
new->next = *head;
new->prev = NULL;
if (*head != NULL)
(*head)->prev = new;
*head = new;
return (new);
}
