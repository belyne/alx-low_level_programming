#include "main.h"

/**
 * _puts - prints a string to the standard output
 * @s: pointer to the string to be printed
 */
void _puts(char *s)
{
	while (*s)
	{
		putchar(*s);
		s++;
	}

	putchar('\n');
}
