#include <stdio.h>

/**
 * main - print numbers seprated by a coma.
 *
 * return: always 0 (success)
 */
int main(void)
{
int d;
for (d = '0'; d <= '9'; d++)
{
putchar(d);
if (d != '9')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
