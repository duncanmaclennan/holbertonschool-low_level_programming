#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of integers using the
 *                 Linear search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: The first index where the value is located, or -1 if the value
 *         is not present in the array or if the array is NULL.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	/* Check if the array is NULL */
	if (array == NULL)
	{
		return (-1);
	}

	/* Iterate through the array to find the value */
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

		/* Use parenthesis for return values as per your coding style */
		if (array[i] == value)
		{
			return ((int)i);
		}
	}

	/* Return -1 if the value is not found */
	return (-1);
}
