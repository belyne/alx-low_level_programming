#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node
 * of a listint_t linked list where the index is the next node
 * starting at 0.
 * @head: first node in the linked list
 * @index: index of the node to return
 * Return: if node doeas not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;
	listint_t *unique = head;

	while (unique && a < index)
	{
		unique = unique->next;
		a++;
	}

	return (unique ? unique : NULL);
}
