#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - a function that prints all elements
 * of a dlistint_t list
 * @h: a pointer to head linked list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h =  h->next;
		n_nodes++;
	}

	return (n_nodes);
}
