#include <stdio.h>

/**
 * main - prints the program name, followed by a new line
 * @argc: number of command-line arguments
 * @argv: array of command-line arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
if (argc > 0)
{
printf("%d\n", argc - 1);
}
return (0);
}
