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
	unsigned long int bits = 0;
	unsigned int exclusive = n ^ m;

	while (exclusive > 0)
	{
		bits += (exclusive & 1);
		exclusive >>= 1;
	}
	return (bits);
}
