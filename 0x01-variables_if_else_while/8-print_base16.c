#include <stdio.h>
/**
 * main - Entry
 *
 * Return: Always 0
 */

int main(void)
{
	int d;
	char low;

	for (d = 0; d <= 9; d++)
	putchar(d + '0');
	for (low = 'a'; low <= 'f'; low++)
	putchar(low);
	putchar('\n');
	return (0);
}
