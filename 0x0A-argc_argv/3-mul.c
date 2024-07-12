#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers
 * @argc: number of command-line arguments
 * @argv: array of command-line arguments
 *
 * Return: Always 0 (Success), or 1 if the number of arguments is incorrect
 */
int main(int argc, char *argv[])
{
int num1, num2, result;
if (argc == 3)
{
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
result = num1 * num2;
printf("%d\n", result);
return (0);
}
else
{
printf("Error\n");
return (1);
}
}
