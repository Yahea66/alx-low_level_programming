#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: the integer to be converted into binary
 *
 * Return: Void
 */
void print_binary(unsigned long int n)
{
int power=(sizeof(n)*8)-1;
int start=0;
while(power>=0)
{
if((n>>power)&1)
{
_putchar('1');
start=1;
}
else if(start)
{
_putchar('0');
}
power--;
}
if(!start)
{
_putchar('0');
}
}
