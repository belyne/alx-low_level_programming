#include "main.h"

/**
 * append_text_to_file - function that appends the text at the end of a file
 * @filename: a pointer to the name of the file
 * @text_content: the string to add to the end of the file
 * Return: 1 on success, or -1 on failure, if filename is NULL -1
 * If text_content is NULL,  Return 1 if the file exists
 * and -1 if the file does not exist
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_desc;
	int written_bytes;
	int len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	file_desc = open(filename, O_WRONLY | O_APPEND);
	written_bytes = write(file_desc, text_content, len);

	if (file_desc == -1 || written_bytes == -1)
		return (-1);

	close(file_desc);

	return (1);
}
