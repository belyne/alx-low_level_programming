#include <stdio.h>
#include "main.h"

/**
 * print_binary - function that prints the binary representation
 * of a number
 * @n: number in binary units
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	int i, n_cnt = 0;
	unsigned long int now;

	for (i = 63; i >= 0; i--)
	{
		now = n >> i;
		if (now & 1)
		{
			_putchar('1');
			n_cnt++;
		}
		else if (n_cnt)
			_putchar('0');
	}
	if (!n_cnt)
		_putchar('0');
}
