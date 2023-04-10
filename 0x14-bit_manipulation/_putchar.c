#include <stdio.h>
#include "main.h"

/**
 * _putchar - writes a character c to stdout
 * @c: the character to print
 * Return: 1 (success), -1 when it is error and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
