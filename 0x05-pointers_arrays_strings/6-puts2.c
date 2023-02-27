#include "main.h"

/**
 * puts2 - Prints every other character of a string
 *@str: The string to be treated
 * Return: void
 */
void puts2(char *str)
{
	int c = 0;
	int t = 0;
	char *y = str;
	int o;

	while (*y != '\0')
	{
		y++;
		c++;
	}
	t = c - 1;
	for (o = 0; o <= t; o++)
	{
		if (o % 2 == 0)
		{
			_putchar(str[o]);
		}
	}
	_putchar('\n');
}
