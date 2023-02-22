#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0 (succes)
 */

int main(void)
{
	int i;

	sum = 0;

	for (i = 0; i < 10; i++)
	{
	if ((i % 3 == 0) || (i % 5 == 0))
	{
	sum = sum + i;
	}
	}
	printtf("%d\n", sum);
	return (0);
}
