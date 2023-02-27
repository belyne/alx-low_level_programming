#include "main.h"

/**
 * print_rev - imprime en reversa
 *@s: string
 * Return: 0
 */
void print_rev(char *s)
{
	int b = 0;
	int o;

	while (*s != '\0')
	{
		b++;
		s++;
	}
	s--;
	for (o = b; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
