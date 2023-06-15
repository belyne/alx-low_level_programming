#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - a function that deletes the node
 * at an index index of a dlistint_t linked list
 * @head: a pointer to the head linked list
 * @index: index of the node that should be deleted starting from 0
 * Return: ewruens 1 if succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *prev;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		if (temp->next != NULL)
			temp->next->prev = NULL;
		free(temp);
		return (1);
	}
	while (temp != NULL)
	{
		if (count == index)
		{
			prev->next = temp->next;
			if (temp->next != NULL)
				temp->next->prev = prev;
			free(temp);
			return (1);
		}
		prev = temp;
		temp = temp->next;
		count++;
	}
	return (-1);
}

