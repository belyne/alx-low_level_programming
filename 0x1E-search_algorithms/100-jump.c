#include "search_algos.h"
#include <math.h>
#include <stdio.h>

/**
 * jump_search - Searches for a value in a sorted array using Jump search.
 * @array: A pointer to the first element of the array.
 * @size: The size of the array.
 * @value: The value to search for.
 *
 * Return: The index of the value if found, otherwise -1.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump = sqrt(size), left = 0, right = 0;
	size_t i;

	if (array == NULL)
		return (-1);

	while (right < size && array[right] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", right, array[right]);
		left = right;
		right += jump;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", left, right);
	right = right >= size ? size - 1 : right;
	for (i = left; i <= right; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
