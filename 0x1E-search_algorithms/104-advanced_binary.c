#include <stdio.h>
#include "search_algos.h"
/**
 * advanced_binary -  searches for a value in an array of integers,
 * using the binary search algorithm.
 * @array: a pointer to the first element of the array to search in.
 * @size: the number of elements in array.
 * @value: the value to search for.
 * Return:  the first index where value is located or -1.
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;

	if (!array || size == 0)
	{
		return (-1);
	}

	return (advanced_binary_recursive(array, value, low, high));
}

/**
 * advanced_binary_recursive -  searches for a value in an array of integers,
 * using the binary search algorithm.
 * @array: a pointer to the first element of the array to search in.
 * @value: the value to search for.
 * @low: the lower bound of the searched array.
 * @high: the upper bound of the searched array.
 * Return:  the first index where value is located or -1.
 */
int advanced_binary_recursive(int *array, int value, size_t low, size_t high)
{
	size_t step;
	size_t i;

	if (low > high)
	{
		return (-1);
	}
	step = low + (high - low) / 2;
	printf("Searching in array: ");
	for (i = low; i < high; i++)
	{
		printf("%d", array[i]);
		if (i < high)
		{
			printf(", ");
		}
	}
	printf("%d", array[high]);
	printf("\n");

	if (array[step] == value)
	{
		if (step == 0 || array[step - 1] != value)
		{
			return ((int)step);
		}
		else
		{
			return (advanced_binary_recursive(array, value, low, step - 1));
		}
	}
	else if (array[step] > value)
	{
		return (advanced_binary_recursive(array, value, low, step - 1));
	}
	else
	{
		return (advanced_binary_recursive(array, value, step + 1, high));
	}
}
