#include "search_algos.h"

/**
 * linear_search - sequential search is a method for finding an element within a list.
 *
 * @value: Value to search for in the array
 * @size: Number of elements in array
 * @array: Array is a pointer to the first element of the array to search in
 *
 * 1st index where value is located
 * or -1 if value is not found or if array is NULL
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			if (array[i] == value)
			{
				return (i);
			}
		}
	}
	return (-1);
}
