#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: intger 
 *
 * Description: The factorial() returns the factorial of a given number.
 *
 * Return: Int
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
} 
if (n == 0)
{
return (1);
}
return (n * factorial(n - 1));
}
