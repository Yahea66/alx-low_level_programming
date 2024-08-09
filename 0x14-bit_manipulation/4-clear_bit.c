#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: the number to be modified.
 * @index: the index of the desired bit.
 *
 * Return: 1 (Success), -1 (error).
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned int max_idx = (sizeof(unsigned long int) * 8) - 1;
if (index > max_idx)
{
return (-1);
}
*n &= ~(1UL << index);
return (1);
}
