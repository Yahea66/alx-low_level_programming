#include <stdio.h>
#include "search_algos.h"
/**
 * linear_search -  searches for a value in an array of integers,
 * using the Linear search algorithm.
 * @array: a pointer to the first element of the array to search in.
 * @size: the number of elements in array.
 * @value: the value to search for.
 * Return:  the first index where value is located or -1.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;
	int index;

	if (!array || size == 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		index = array[i];
		printf("Value checked array[%lu] = [%d]\n", i, index);
		if (index == value)
		{
			return ((int)i);
		}
	}
	return (-1);
}
