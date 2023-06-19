#include "main.h"

/**
 * _strspn - calculates the length of the initial segment of a string
 *            consisting only of characters from a specific set
 * @s: pointer to the string
 * @accept: pointer to the set of characters
 *
 * Return: the length of the initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
		if (accept[j] == '\0')
			break;
	}
	return (count);
}
