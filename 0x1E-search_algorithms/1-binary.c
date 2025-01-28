#include <stdio.h>
#include "search_algos.h"
/**
 * binary_search -  searches for a value in an array of integers,
 * using the Binary search algorithm.
 * @array: a pointer to the first element of the array to search in.
 * @size: the number of elements in array.
 * @value: the value to search for.
 * Return:  the first index where value is located or -1.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i;
	size_t first = 0;
	size_t last = size - 1;
	size_t indx;

	if (array == NULL || size == 0)
	{
		return (-1);
	}
	while (first <= last)
	{
		indx = first + (last - first) / 2;
		printf("Searching in array: ");
		for (i = first; i <= last; i++)
		{
			printf("%d", array[i]);
			if (i < last)
			{
				printf(", ");
			}
		}
		printf("\n");
		if (array[indx] == value)
		{
			return ((int)indx);
		}
		else if (array[indx] < value)
		{
			first = indx + 1;
		}
		else
		{
			last = indx - 1;
		}
	}
	return (-1);
}
