#include "lists.h"
/**
 *  sum_listint - finding the sum of list
 *  @head: first node on the list
 *  Return: the sum of the list data
 */
int sum_listint(listint_t *head)
{
int sum = 0;
while (head)
{
sum += head->n;
head = head->next;
}
return (sum);
}
