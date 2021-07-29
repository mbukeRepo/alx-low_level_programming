#include "lists.h"
/**
  * list_len - returns the length of the linked list
  * @h: the head of the list
  * Return: this size of the list
  */

size_t list_len(const list_t *h)
{
size_t nodes = 0;
while (h)
{
h = h->next;
nodes++;
}
return (nodes);
}
