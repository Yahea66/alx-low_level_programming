#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, followed by a new line.
 *
 * RETURN: Always 0 (Success)
 */

int main(void)
{
char alphabet;
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
if (alphabet != 'e' && alphabet != 'q')
{
putchar(alphabet);
}
}
putchar('\n');
return (0);
}
