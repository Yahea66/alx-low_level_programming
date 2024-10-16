#include <stdlib.h>
#include <stddef.h>
#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table.
 * @size: the size of the array
 *
 * Return: a pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_node_t **hash_array;
    hash_table_t *hash_table;

    /* Allocate memory for the array of pointers to hash_node_t */
    hash_array = malloc(size * sizeof(hash_node_t *));
    if (hash_array == NULL)
    {
        return (NULL);
    }

    /* Allocate memory for the hash table structure */
    hash_table = malloc(sizeof(hash_table_t));
    if (hash_table == NULL)
    {
        free(hash_array); /* Clean up previously allocated memory */
        return (NULL);
    }

    /* Initialize hash table fields */
    hash_table->size = size;
    hash_table->array = hash_array;

    return (hash_table);
}
