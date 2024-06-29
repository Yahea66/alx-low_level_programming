#include "main.h"
/**
 * main - draws a diagonal line 
 *
 * Return: Void
 */
void print_diagonal(int n)
{
int i;
int j;
if (n > 0)
{
for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++) 
{
_putchar(32);
}
_putchar(92);
_putchar('\n'); 
}
}
_putchar('\n');
} 
