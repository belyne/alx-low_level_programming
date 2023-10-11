#include "search_algos.h"
#include <stdio.h>

/**
 * linear_skip - Searches for a value in a sorted skip list of integers.
 * @list: Pointer to the head of the skip list to search in.
 * @value: Value to search for.
 *
 * Return: Pointer to the first node where value is located,
 * or NULL if not found.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	if (!list)
		return (NULL);

	skiplist_t *current = list, *express = NULL;

	while (current->express && current->n < value)
	{
		express = current->express;
		printf("Value checked at index [%lu] = [%d]\n", express->index, express->n);

		if (express->n >= value)
		{
			printf("Value found between indexes [%lu] and [%lu]\n",
				   current->index, express->index);
			break;
		}

		current = current->express;
	}

	if (!express)
	{
		while (current->next)
			current = current->next;
		printf("Value found between indexes [%lu] and [%lu]\n",
			   current->index, current->index);
	}

	while (current && current->n < value)
	{
		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
		current = current->next;
	}

	if (!current)
		return (NULL);

	printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);

	return ((current->n == value) ? current : NULL);
}
