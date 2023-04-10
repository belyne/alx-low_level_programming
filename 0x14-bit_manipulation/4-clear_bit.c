#include <stdio.h>
#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0
 * at a given index
 * @index: is index starting from 0 of the bit you want to set
 * @n: a pointer to the changed number
 * Return: 1 if it worked, or -1 if an error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1 << index) & *n);
	return (1);
}
