#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dlistint - a function that frees a dlistint_t list
 * @head: apointer to head of the linked list
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
