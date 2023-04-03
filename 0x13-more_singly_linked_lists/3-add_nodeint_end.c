#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node
 * at the end of listint_t list.
 * @head: pointer to the first node
 * @n: data to insert
 * Return: address of a new element or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nodeA;
	listint_t *tmp = *head;

	nodeA = malloc(sizeof(listint_t));
	if (!nodeA)
		return (NULL);

	nodeA->n = n;
	nodeA->next = NULL;

	if (*head == NULL)
	{
		*head = nodeA;
		return (nodeA);
	}
	while (tmp->next)
		tmp = tmp->next;

	tmp->next = nodeA;

	return (nodeA);
}
