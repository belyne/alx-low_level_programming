#include "main.h"

/**
 * _strncat - concatenates two strings, using at most n bytes from src
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * @n: maximum number of bytes to be concatenated from src
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *dest_ptr = dest;
	size_t dest_len = 0;

	while (*dest_ptr)
	{
		dest_ptr++;
		dest_len++;
	}
	while (*src && n > 0)
	{
		*dest_ptr++ = *src++;
		dest_len++;
		n--;
	}
	*dest_ptr = '\0';
	return (dest);
}
