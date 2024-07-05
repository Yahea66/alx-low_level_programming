#include "main.h"

/**
 * print_triangle - Prints a triangle using the character '#'.
 * @size: The size of the triangle
 *
 * Description: This function prints a right-angled triangle with the specified
 * size using the character '#'. If size is 0 or less, the function only prints
 * a newline.
 *
 * Return: void
 */
void print_triangle(int size)
{
int i, j, k;
if (size > 0)
{
for (i = 1; i <= size; i++)
{
for (j = size; j > i; j--)
{
_putchar(32); /* ASCII code for space */
}
for (k = 0; k < i; k++)
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
