#include <stdio.h>
#include "main.h"

/**
 * flip_bits - function that returns the number of bits
 * you would need to flip to get from one number to another
 * @n: the first number
 * @m: the second number
 * Return: number of bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int b, n_cnt = 0;
	unsigned long int now;
	unsigned long int exclusive = n ^ m;

	for (b = 63; b >= 0; b--)
	{
		now = exclusive >> b;
		if (now & 1)
			n_cnt++;
	}

	return (n_cnt);
}
