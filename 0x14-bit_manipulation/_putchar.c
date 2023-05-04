#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * _putchar - function that writes a character to stdout
 * @c: the charactr to print
 * Return: 1 (success), -1 when it is error and errno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
