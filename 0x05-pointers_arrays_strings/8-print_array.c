#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array
 * @a: pointer to an array
 * @n: integer representing the number of elements
 *
 * Description: This function takes a pointer to an integer array,
 * and prints n elements of the array.
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i < n - 1) // Check to avoid printing a comma after the last element
{
printf(", ");
}
}
printf("\n"); // Corrected to use double quotes
}
