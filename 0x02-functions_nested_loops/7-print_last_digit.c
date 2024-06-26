#include "main.h"

/**
 * int print_last_digit(int) - prints the last digit
 *
 * return: the last digit of a number
 */
int print_last_digit(int c)
{
int n;
if (c < 0)
{
n = -1 * (c % 10);
}
else
{
n = c % 10;
}
return (n);
}

