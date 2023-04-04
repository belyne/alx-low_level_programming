#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t
 * linked list, and returns the head node's data(n)
 * @head: pointer to the first element
 * Return: if linked list is empty returns 0.
 */
int pop_listint(listint_t **head)
{
	listint_t *dlt;
	int ab;

	if (!head || !*head)
		return (0);

	ab = (*head)->n;
	dlt = (*head)->next;
	free(*head);
	*head = dlt;

	return (ab);
}
