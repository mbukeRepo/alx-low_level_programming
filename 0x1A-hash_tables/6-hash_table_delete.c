#include "hash_tables.h"

/**
 * hash_table_delete - deletes the entire hash table
 * @ht: head of the hash table
 */

void hash_table_delete(hash_table_t *ht)
{
hash_table_t *head = ht;
unsigned long int i = 0;
hash_node_t *node, *tmp;
while (i < ht->size)
{
if (ht->array[i] != NULL)
{
node = ht->array[i];
while (node != NULL)
{
tmp = node->next;
free(node->key);
free(node->value);
free(node);
node = tmp;
}
}
i++;
}
free(head->array);
free(head);
}
