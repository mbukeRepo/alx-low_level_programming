#include "lists.h"
/**
 * add_nodeint - adds a node
 * @head: first node on the list
 * @n: data
 * Return: pointer to the node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;
new = malloc(sizeof(listint_t));
if (new == NULL)
{
return (NULL);
}
new->n = n;
new->next = *head;
*head = new;
return (new);
}
