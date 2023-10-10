#include "search_algos.h"
#include <stdio.h>

/**
 * advanced_binary_recursive - Searches for a value in a sorted array using
 *                            advanced binary search recursively.
 * @array: Pointer to the first element of the array
 * @low: Starting index of the subarray
 * @high: Ending index of the subarray
 * @value: Value to search for
 *
 * Return: Index where value is located, or -1 if not found
 */
int advanced_binary_recursive(int *array, size_t low, size_t high, int value)
{
	if (low <= high)
	{
		size_t i;
		size_t mid = low + (high - low) / 2;

		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i < high)
				printf(", ");
		}
		printf("\n");
		if (array[mid] == value)
		{
			if (mid == low || array[mid - 1] != value)
				return (mid);
			return (advanced_binary_recursive(array, low, mid, value));
		}
		if (array[mid] < value)
			return (advanced_binary_recursive(array, mid + 1, high, value));
		return (advanced_binary_recursive(array, low, mid, value));
	}
	return (-1);
}

/**
 * advanced_binary - Searches for a value in a sorted array using
 *                   advanced binary search.
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index where value is located, or -1 if not found
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	return (advanced_binary_recursive(array, 0, size - 1, value));
}
