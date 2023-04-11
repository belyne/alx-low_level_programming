#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: the name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 on sucess, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, num, length = 0;

	if (filename == NULL)
		return (-1);
	{
		for (length = 0; text_content[length];)
			length++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	num = write(fd, text_content, length);

	if (fd == -1 || num == -1)
		return (-1);

	close(fd);

	return (1);
}
