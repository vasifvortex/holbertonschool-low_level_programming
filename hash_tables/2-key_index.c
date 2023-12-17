#include "hash_tables.h"

/**
 * key_index - Retrieves the index of a key in a hash table array
 * @key: The key to be indexed
 * @size: Size of the array of the hash table
 *
 * Return: Index where the key/value pair should be stored in the array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int hash;
hash = hash_djb2(key);
return (hash % size);
}
