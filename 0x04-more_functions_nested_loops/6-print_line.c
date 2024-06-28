#include "main.h" 
/**
 * main - draws a straight line 
 *
 * Return: Void
 */
void print_line(int n)
{
int i;
if (n > 0)
{
for (i = 0; i < n; i++)
{
_putchar('_');
}
}
_putchar('\n');
}
