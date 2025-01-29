#include <stdio.h>
#include "search_algos.h"
/**
 * exponential_search -  searches for a value in an array of integers,
 * using the interpolation search algorithm.
 * @array: a pointer to the first element of the array to search in.
 * @size: the number of elements in array.
 * @value: the value to search for.
 * Return:  the first index where value is located or -1.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t step = 1;
	size_t prev = 0;
	size_t high = size - 1;
	size_t jump;
	size_t i;

	if (!array || size == 0)
	{
		return(-1);
	}
	while (array[step] < value && step < high)
	{
		printf("Value checked array[%lu] = [%d]\n", step, array[step]);
		prev = step;
		step *= 2;
		if (step > high)
		{
			step = high;
		}
	}
	printf("Value found between indexes [%lu] and [%lu]\n", prev, step);
	jump = prev;
	while (prev <= high)
	{
		printf("Searching in array: ");
		for (i = prev; i <= step; i++)
		{
			printf("%d", array[i]);
			if (i < high)
			{
				printf(", ");
			}
		}
		printf("\n");
		jump = prev + (step - prev) / 2;
		if (array[jump] == value)
		{
			return ((int)jump);
		}
		else if (array[jump] < value)
		{
			prev = jump + 1;
		}
		else
		{
			step = jump - 1;
		}
	}
	return (-1);
}
