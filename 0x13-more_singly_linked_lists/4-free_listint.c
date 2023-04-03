#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - function that frees a lstint_t list
 * @head: list to be freed
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *fun;

	while (head)
	{
		fun = head->next;
		free(head);
		head = fun;
	}
}
