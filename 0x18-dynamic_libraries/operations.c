#include <stdio.h>
#include "operations.h"

/**
 * add - adds two numbers
 * @a: first number
 * @b: second number
 * Return: the addition of two numbers
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - subtract two numbers from each other
 * @a: first number
 * @b: second number
 * Return: the difference between two numbers
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - multiply two numbers
 * @a: first number
 * @b: second number
 * Return: the product of two numbers
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - divide two numbers
 * @a: first number
 * @b: second number
 * Return: the quotient of the two numbers
 */
int div(int a, int b)
{
	if (b != 0)
		return (a / b);
	else
		return (0); /* Handle division by zero */
}
/**
 * mod - perform modulo operation
 * @a: first number
 * @b: second number
 *
 * Return: the remainder of the division of a by b
 */
int mod(int a, int b)
{
	if (b != 0)
		return (a % b);
	printf("Error: Division by zero\n");
	return (0); /* Handle division by zero */
}
