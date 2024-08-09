#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: the number to be modified.
 * @index: the index of the desired bit.
 *
 * Return: 1 (Success), - 1 (error).
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned int max_idx = (sizeof(unsigned long int) * 8) - 1;
if (index > max_idx)
{
return (-1);
}
*n |= 1UL << index;
return (1);
}
