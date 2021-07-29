#include "lists.h"

/**
  * add_node_end - adds a node on the end of the list
  * @head: the first node on the list
  * @str: the data to add into the node
  * Return: address of the new node
  */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *new, *last_node;
int len = 0;
char *newstr;
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
/* dealing with the length of the string */
while (str[len] != '\0')
{
len++;
}
new->str = newstr;
new->len = len;
new->next = NULL;

if (*head == NULL)
{
*head = new;
}
else
{
last_node = *head;
while (last_node->next != NULL)
{
last_node = last_node->next;
}
last_node->next = new;
}
return (new);
}
