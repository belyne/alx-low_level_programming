#include "main.h"

/**
 * print_lst_digit - function that prints lastdigit of a number
 * @n: The number to be checked
 * Return: value of the last digit of number
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
	{
	last = last * (-1);
	}
	else if (last > 0)
	{
	last = last * (+1);
	}
	else
	{
	last = 0;
	}
	_putchar(last + '0');
	return (last);
}
