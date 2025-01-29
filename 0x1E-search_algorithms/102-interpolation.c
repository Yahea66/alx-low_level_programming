#include <stdio.h>
#include "search_algos.h"
/**
 * interpolation_search -  searches for a value in an array of integers,
 * using the interpolation search algorithm.
 * @array: a pointer to the first element of the array to search in.
 * @size: the number of elements in array.
 * @value: the value to search for.
 * Return:  the first index where value is located or -1.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t pos = low + (((double)(high - low) / (array[high] - array[low]))
			* (value - array[low]));

	if (!array)
	{
		return (-1);
	}
	while (pos < high)
	{
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
		{
			return ((int)pos);
		}
		else if (array[pos] > value)
		{
			high = pos - 1;
		}
		else
		{
			low = pos + 1;
		}
		pos = low + (((double)(high - low) / (array[high] - array[low]))
			* (value - array[low]));
	}
	printf("Value checked array[%lu] is out of range\n", pos);
	return (-1);
}
