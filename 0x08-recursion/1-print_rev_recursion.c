#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse.
 * @s: pointer to a string
 *
 * Description: The _print_rev_recursion() prints a string in reverse order
 *
 * Return: Void
 */
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}
_print_rev_recursion(s + 1);
_putchar(*s);
}
