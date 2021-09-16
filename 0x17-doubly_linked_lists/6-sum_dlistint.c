#include "lists.h"
/**
 * sum_dlistint - sums up the data in the list
 * @head: pointer to the first node in the list
 * Return: sum of the data in the list
 */
int sum_dlistint(dlistint_t *head)
{
int sum = 0;
dlistint_t *el = head;
while (el)
{
sum += el->n;
el = el->next;
}
return (sum);
}
