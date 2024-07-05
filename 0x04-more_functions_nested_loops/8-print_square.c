#include "main.h"

/**
 * print_square - Prints a square using the character '#'.
 * @size: The size of the square
 *
 * Description: This function prints a square with the specified size using
 * the character '#'. If size is 0 or less, the function only prints a newline.
 *
 * Return: void
 */
void print_square(int size)
{
int i, c;
if (size > 0)
{
for (i = 0; i < size; i++)
{
for (c = 0; c < size; c++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
