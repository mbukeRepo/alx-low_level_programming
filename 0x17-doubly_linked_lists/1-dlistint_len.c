#include "lists.h"
/**
 * dlistint_len - returns the length of the list
 * @h: the head of the head
 * Return: the length of the list
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t len = 0;
for (; h; len++)
h = h->next;
return (len);
}
