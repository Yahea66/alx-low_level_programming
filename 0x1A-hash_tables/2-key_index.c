#include <stdlib.h>
#include <stddef.h>
#include "hash_tables.h" 
/**
 * hash_table_create - creates a hash table.
 * @size: the size of the array
 *
 * Return: a pointer to the newly created hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int hash_value = hash_djb2(key);
return (hash_value % size);
} 
