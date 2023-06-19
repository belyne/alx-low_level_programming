#include "main.h"

/**
 * _strstr - locates a substring within a string
 * @haystack: pointer to the string to be searched
 * @needle: pointer to the substring to search for
 *
 * Return: pointer to the first occurrence of the substring needle in the
 *         string haystack, or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *start = haystack;
		char *sub = needle;

		while (*haystack && *sub && *haystack == *sub)
		{
			haystack++;
			sub++;
		}
		if (!*sub)
			return (start);
		haystack = start + 1;
	}
	return (NULL);
}
