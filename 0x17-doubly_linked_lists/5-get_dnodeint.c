#include "lists.h"

/**
 * get_dnodeint_at_index - a function that returns the nth node
 * of a slistint_t linked list
 * @head: a pointer to head of the linked list
 * @index: index of the node to retrieve starting from 0
 * Return: returns nth nodeof a linked list, if the node
 * does not exist, return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int count = 0;

	while (current != NULL)
	{
		if (count == index)
		{
			return (current);
		}
		count++;
		current = current->next;
	}
	return (NULL);
}
