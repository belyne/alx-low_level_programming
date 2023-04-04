#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - function that returns the sum of all
 * the data(n) of a listint_t linked list
 * @head: first node in the linked list
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *fun = head;

	while (fun)
	{
		sum += fun->n;
		fun = fun->next;
	}

	return (sum);
}
