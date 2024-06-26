#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet
 *
 * Return: void 
 */
void print_alphabet_x10(void)
{
int i;
char alph;
for (i = 0; i <= 9; i++)
{
for (alph = 'a'; alph <= 'z'; alph++)
{
_putchar(alph);
}
_putchar('\n');
}
}
