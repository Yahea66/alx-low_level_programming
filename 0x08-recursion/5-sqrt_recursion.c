#include "main.h"

/**
 * helper_sqrt - helper function to find natural square root recursively.
 * @n: number to find the square root of
 * @guess: current guess for the square root
 *
 * Return: the square root of n or -1 if n does not have a natural square root
 */
int helper_sqrt(int n, int guess)
{
if (guess * guess > n)
{
return (-1);
}
if (guess * guess == n)
{
return (guess);
}
return (helper_sqrt(n, guess + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number to find the square root of
 *
 * Description: The function returns the natural square root of a number.
 *
 * Return: the square root of n or -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
return (helper_sqrt(n, 0));
}
