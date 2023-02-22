#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0 (succes)
 */

int main(void)
{
	int i, sum = 0;

	while (i < 1024)
	{
	if ((i % 3 == 0) || (i % 5 == 0))
	{
	sum += i;
	}
	i++;
	}
	printtf("%d\n", sum);
	return (0);
}
