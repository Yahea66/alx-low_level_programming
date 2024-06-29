#include "main.h"
/**
 * main - prints a triangle. 
 *
 * Return: Void
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
_putchar(32);
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
