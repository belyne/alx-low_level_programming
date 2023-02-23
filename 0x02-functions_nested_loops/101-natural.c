#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0 (succes)
 */

int main(void)
{
	int i, z = 0;

	while (i < 1024)
	{
	if ((i % 3 == 0) || (i % 5 == 0))
	{
	z += i;
	}
	i++;
	}
	printtf("%d\n", z);
	return (0);
}
