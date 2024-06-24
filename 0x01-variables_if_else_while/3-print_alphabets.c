#include <stdio.h>

/**
 * main -  prints the alphabet in lowercase, and then in uppercase.
 *
 * Return: Always 0 (Succcess)
 */

int main(void)
{
char low;
for (low = 'a'; low <= 'z'; low++)
{
putchar(low);
}
for (low = 'A'; low <= 'Z'; low++)
{
putchar(low);
}
putchar('\n');
return (0);
}

