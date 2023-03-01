#include "main.h"
/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int k;
	int f;

	for (k = 0; k < n--; k++)
	{
		f = a[k];
		a[k] = a[n];
		a[n] = f;
	}
}
