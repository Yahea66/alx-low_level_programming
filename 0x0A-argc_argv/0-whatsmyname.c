#include <stdio.h>

/**
 * main - prints its name, followed by a new line. 
 * @argc: the numbe of argumentd 
 * @argv: the array of strings containing the arguments
 *
 * Description: The function prints the program name. 
 *
 * Return: void
 */
int main (__attribute__((unused)) int argc, char *argv[])
{
printf("%s \n", argv[0]);
return (0);
} 
