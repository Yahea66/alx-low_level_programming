#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array of integers using the
 * Jump search algorithm.
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in array.
 * @value: The value to search for.
 * Return: The first index where value is located or -1.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump = (size_t)sqrt(size);
	size_t prev = 0;
	size_t step = jump;
	size_t i;

	if (!array)
	{
		return (-1);
	}
	while (step < size && array[step] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", step, array[step]);
		prev = step;
		step += jump;
	}
	if (step >= size)
	{
		step = size - 1;
	}
	printf("Value checked array[%lu] = [%d]\n", step, array[step]);
	printf("Value found between indexes [%lu] and [%lu]\n", prev, step);
	for (i = prev; i <= step && i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return ((int)i);
		}
	}

	return (-1);
}
