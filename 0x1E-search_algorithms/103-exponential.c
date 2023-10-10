#include "search_algos.h"
#include <stdio.h>

/**
 * exponential_search - Searches for a value in a sorted array using
 *                      exponential search.
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index where value is located, or -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1, j;

	if (array == NULL)
		return (-1);

	while (i < size && array[i] <= value)
	{
		size_t left = i / 2;
		size_t right = (i < size - 1) ? i : size - 1;
		size_t mid = left + (right - left) / 2;

		printf("Value found between indexes [%lu] and [%lu]\n", left, right);
		printf("Searching in array: ");
		for (j = left; j <= right; j++)
		{
			printf("%d", array[j]);
			if (j < right)
				printf(", ");
		}
		printf("\n");

		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			i = mid + 1;
		else
			i = mid;
	}
	return (-1);
}
