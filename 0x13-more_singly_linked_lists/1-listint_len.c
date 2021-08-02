#include "lists.h"
/**
 *  listint_len - finds the length of the list
 *  @h: head of the list
 *  Return: the length of the list
 */
size_t listint_len(const listint_t *h)
{
size_t n = 0;
while (h)
{
n++;
h = h->next;
}
return (n);
}
