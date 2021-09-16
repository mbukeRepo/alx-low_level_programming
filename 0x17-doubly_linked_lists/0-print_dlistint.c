#include "lists.h"

/**
 * print_dlistint - prints list and return the number of elts
 * @h: the first element of the list
 * Return: number of elements
 */

size_t print_dlistint(const dlistint_t *h)
{
size_t elts;
elts = 0;
while (h)
{
printf("%d\n", h->n);
h = h->next;
elts++;
}
return (elts);
}
