#include "lists.h"
/**
  * free_list - clears the list in the memory
  * @head: the head of the list
  */
void free_list(list_t *head)
{
list_t *tmp;
while (head)
{
tmp = head->next;
free(head->str);
free(head);
head = tmp;
}
}
