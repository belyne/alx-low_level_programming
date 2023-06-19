#include "operations.h"
#include <stdio.h>

/**
 * main - checks the code
 * Return: Always 0
 */
int main(void)
{
	int a = 10;
	int b = 5;

	printf("Addition: %d\n", add(a, b));
	printf("Subtraction: %d\n", sub(a, b));
	printf("Multiplication: %d\n", mul(a, b));
	printf("Division: %d\n", div(a, b));
	return (0);
}
