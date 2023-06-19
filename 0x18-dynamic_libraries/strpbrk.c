#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of characters
 * @s: pointer to the string to be searched
 * @accept: pointer to the string containing the characters to search for
 *
 * Return: pointer to the first occurrence of any character from accept
 *         in the string s, or NULL if no match is found
 */
char *_strpbrk(char *s, char *accept)
{
	char *s_ptr, *accept_ptr;

	for (s_ptr = s; *s_ptr; s_ptr++)
	{
		for (accept_ptr = accept; *accept_ptr; accept_ptr++)
		{
			if (*s_ptr == *accept_ptr)
				return (s_ptr);
		}

	}
	return (NULL);
}
