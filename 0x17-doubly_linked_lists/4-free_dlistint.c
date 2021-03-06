#include "lists.h"
/**
 * free_dlistint - frees the list
 * @head: pointer to the first element
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *forward;
while (head != NULL)
{
forward = head->next;
free(head);
head = forward;
}
}
