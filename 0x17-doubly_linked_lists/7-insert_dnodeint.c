#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * insert_dnodeint_at_index - a function that inserts a new node
 * at a given position
 * @h: Pointer to a pointer to the head of the linked list.
 * @idx: Index of the list where the new node should be inserted.
 * @n: Data value of the new node.
 *
 * Return: Address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp;
	unsigned int count = 0;

	if (h == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *h;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	temp = *h;

	while (temp != NULL)
	{
		if (count == idx - 1)
		{
			new_node->next = temp->next;

			if (temp->next != NULL)
				temp->next->prev = new_node;
			temp->next = new_node;
			new_node->prev = temp;
			return (new_node);
		}
		temp = temp->next;
		count++;
	}
	free(new_node);
	return (NULL);
}
