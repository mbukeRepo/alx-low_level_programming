#include "lists.h"
/**
 * pop_listint - removes the first node on the list
 * @head: first node on the list
 * Return: data on the removed node
 */
int pop_listint(listint_t **head)
{
listint_t *tmp;
int ret;
if (*head == NULL)
{
return (0);
}
tmp = *head;
ret = (*head)->n;
*head = (*head)->next;
free(tmp);
return (ret);
}
