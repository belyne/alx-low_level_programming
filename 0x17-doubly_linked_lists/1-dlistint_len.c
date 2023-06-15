#include "lists.h"

/**
 * dlistint_len - a function that returns the number
 * of elements in a linked dlistint_t list
 * @h: a pointer to head linked list
 * Return: the number of elements in a linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
