#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_dlistint - a function that returns the sum of all the data(n)
 * of a dlistint_t linked list
 * @head: a pointer to head of the linked list
 * Return: returns the sum of all the data(n) of a linked list
 * if the list is empty, return 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
