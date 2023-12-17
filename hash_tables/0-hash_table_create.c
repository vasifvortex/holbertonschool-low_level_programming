#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_create - creating hash table
 * @size: Size of hash table
 *
 * Return: hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *hash = malloc(sizeof(hash_table_t));
if (hash == NULL)
return (NULL);
hash->size = size;
hash->array = malloc(sizeof(hash_node_t *) * size);
if (hash->array == NULL)
{
free(hash);
return (NULL);
}
return (hash);
}
