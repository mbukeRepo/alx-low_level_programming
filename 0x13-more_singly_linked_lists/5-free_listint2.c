#include "lists.h"
/**
 * free_listint2 - frees the list and set head to NULL
 * @head: pointer to pointer of the first node
 */
void free_listint2(listint_t **head)
{
listint_t *tmp;
if (head == NULL)
{
return;
}
while (*head)
{
tmp = (*head)->next;
free(*head);
*head = tmp;
}
head = NULL;
}
