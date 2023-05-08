#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: a pointer to the name of the file to create
 * @text_content: a pointer to a string to write to the file
 * Return: if the function fails --1, otherwise -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int byts_wrtn;
	int size = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (size = 0; text_content[size];)
			size++;
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	byts_wrtn = write(fd, text_content, size);

	if (fd == -1 || byts_wrtn == -1)
		return (-1);

	close(fd);

	return (1);
}
