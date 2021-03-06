#include "hash_tables.h"

/**
 * hash_table_set - sets key to value in hash table
 * @ht: pointer to hash table
 * @key: key for retrivial
 * @value: value to store
 * Return: 1 -for success 0-for failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
hash_node_t *new;
unsigned long int index, i;
char *copy_value;
if (ht == NULL || *key == '\0' || value == NULL)
return (0);

copy_value = strdup(value);
if (copy_value == NULL)
return (0);

index = key_index((const unsigned char *)key, ht->size);
for (i = index; ht->array[i]; i++)
{
if (strcmp(ht->array[i]->key, key) == 0)
{
free(ht->array[i]->value);
ht->array[i]->value = copy_value;
return (1);
}
}
new = malloc(sizeof(hash_node_t));
if (new == NULL)
{
free(copy_value);
return (0);
}

new->key = strdup(key);
if (new->key == NULL)
{
free(new);
return (0);
}
new->value = copy_value;
new->next = ht->array[index];
ht->array[index] = new;
return (1);
}
