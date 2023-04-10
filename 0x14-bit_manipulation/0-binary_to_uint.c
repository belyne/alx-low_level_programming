#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - function that convrts a binary number
 * to an unsigned int
 * @b: a pointer to a string of 0 and 1 chars
 * Return: the converted number, or 0 if there is one or more chars
 * in the string b that is not 0 or 1, b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int x = 0;
	unsigned int dec_number = 0;


	if (!b)
		return (0);
	while (b[x])
	{
		if (b[x] < '0' || b[x] > '1')
			return (0);
		dec_number = 2 * dec_number + (b[x] - '0');
		x++;
	}
	return (dec_number);
}
