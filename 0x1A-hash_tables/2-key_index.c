#include "hash_tables.h"

/**
 * key_index - returns the index where we can store our value
 * @key: key for retrivial
 * @size: size of the hash table
 * Return: index used to store values
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
return (hash_djb2(key) % size);
}
