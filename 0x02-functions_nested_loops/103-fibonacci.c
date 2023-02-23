#include <stdio.h>

/**
 * main - Prints the sum of even fibonacci numbers
 * less than 4000000.
 * Return: Always 0
 */

int main(void)
{
	int i;
	unsigned long int j, k, next, sum;

	j = 1;
	k = 2;
	sum = 0;

	for (i = 1; i <= 33; i++)
	{
	if (j < 4000000 && (j % 2) == 0)
	{
	sum = sum + j;
	}
	next = j + k;
	j = k;
	k = next;
	}
	printf("%lu", sum);
	return (0);
}
