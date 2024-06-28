#include "main.h" 
/**
 * main - prints 10 times the numbers
 *
 * Return: Void
 */
void more_numbers(void)
{
int i, d;
for (d = 0; d < 10; d++)
{
for (i = 0; i <= 14; i++)
{
if (i > 9)
{
_putchar(i / 10 + '0');
} 
_putchar(i % 10 + '0');
}
_putchar('\n');
}
}
