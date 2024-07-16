#include <stdlib.h>
#include <stddef.h>

/**
 * create_array - creates an array of chars
 * @size: number of chars in the array
 * @c: the char to initialize the array
 *
 * Return: NULL or a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
    char *arr;
    unsigned int i;

    if (size == 0)
    {
        return NULL;
    }

    arr = malloc(sizeof(char) * size);
    if (arr == NULL)
    {
        return NULL;
    }

    for (i = 0; i < size; i++)
    {
        arr[i] = c;
    }

    return arr;
}
