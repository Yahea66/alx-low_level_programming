#include "main.h"

/**
 * int print_sign - prints the sign of a num. 
 * Return: void 
 */
int print_sign(int n)
{
int re;	
if (n > 0)
{
re = 1;
_putchar('+');
}
else if (n == 0)
{
re = 0;
_putchar('0');
}
else
{
re = -1;
_putchar('-');
}
return (re);
}
