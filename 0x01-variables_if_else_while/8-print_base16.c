#include <stdio.h>

/**
 *  main - prints all the numbers of base 16 in lowercase.
 *
 *  return: always 0 (success)
 */

int main(void)
{
int d;
char alph;
for (d = '0'; d <= '9'; d++)
{
putchar(d);
}
for (alph = 'a'; alph <= 'f'; alph++)
{
putchar(alph);
}
putchar('\n');
return (0);
}
