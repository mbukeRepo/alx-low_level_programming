#include "lists.h"
/**
 * add_nodeint_end - adds a node at the end
 * @head: pointer to pointer of the first node
 * @n: data to add
 * Return: address of the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new;
listint_t *temp;
new = malloc(sizeof(listint_t));

if (new == NULL)
{
return (NULL);
}

new->n = n;
new->next = NULL;

if (*head == NULL)
{
*head = new;
}
else
{

temp = *head;
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = new;

}
return (new);
}
