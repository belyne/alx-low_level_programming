#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list
 * @head: pointer to the listint_t list
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *frt;

	if (head == NULL)
		return;
	while (*head)
	{
		frt = (*head)->next;
		free(*head);
		*head = frt;
	}
	*head = NULL;
}
