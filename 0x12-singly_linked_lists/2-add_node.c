#include "lists.h"

/**
  * add_node - adds a node at the start of the list
  * @head: the address of the first node
  * @str: the data to insert into the node
  * Return: address of the new node
  */

list_t *add_node(list_t **head, const char *str)
{
list_t *new;
char *newstr;
int len = 0;

new = malloc(sizeof(list_t));
if (new == NULL)
{
return (NULL);
}
newstr = strdup(str);
if (str == NULL)
{
free(new);
return (NULL);
}
while (str[len])
{
len++;
}
new->str = newstr;
new->len = len;
new->next = *head;
*head = new;
return (new);
}
