#include <stdio.h>

/**
 * main - prints each arguments, followed by a new line
 * @argc: number of command-line arguments
 * @argv: array of command-line arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int i;
if (argc > 0)
{
for (i = 0; i < argc; i++) 
{
printf("%s \n", argv[i]);
} 
}
return (0);
}
