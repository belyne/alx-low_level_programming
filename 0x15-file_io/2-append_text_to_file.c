#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: is the name of the file
 * @text_content: is the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 * if filename is NULL return -1, do not add anything to the file
 * if the file exist return 1 and if the file does not exist or if you
 * do not have the required permissions to write the file return -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fp, num, lh = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lh = 0; text_content[lh];)
			lh++;
	}

	fp = open(filename, O_RDONLY | O_APPEND);
	num = write(fp, text_content, lh);

	if (fp == -1 || num == -1)
		return (-1);
	close(fp);

	return (1);
}
