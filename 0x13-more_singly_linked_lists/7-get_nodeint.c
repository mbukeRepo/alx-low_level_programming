#include "lists.h"
/**
 * get_nodeint_at_index - gets node at an index
 * @head: first node on the list
 * @index: index of the node
 * Return: pointer to that node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *node;
unsigned int n = 0;

node = NULL;
while (head)
{
if (n == index)
{
node = head;
break;
}
head = head->next;
n++;
}
return (node);
}
