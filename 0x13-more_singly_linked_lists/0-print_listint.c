#include "lists.h"
/**
 * print_listint - prints data in a linked list
 * @h: head of the list
 * Return: number of nodes of the list
 */

size_t print_listint(const listint_t *h)
{
size_t n = 0;
while (h)
{
n++;
printf("%d\n", h->n);
h = h->next;
}
return (n);
}
