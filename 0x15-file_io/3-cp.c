#include "main.h"
/**
 * allocate_buffer - function that allocates 1024 bytes for a buffer
 * @file: the file name in which the buffer stores chars
 * Return: a pointer to the newly_allocated buffer
 */
char *allocate_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}

/**
 * close_file_descriptor - function thatcloses file descriptors
 * @fd: the file descriptor to be closed
 * Return: nothing
 */
void close_file_descriptor(int fd)
{
	int status;

	status = close(fd);

	if (status == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - function that copies contents of the file to another file
 * @argc: number of arguments counts
 * @argv: array of arguments
 * Return: Always 0
 * if the argument count is incorrect, exit code is 97
 * if file_from does not exist or can not be read, exit code is 98
 * if file_to can not be written to, exit code is 99
 * if file_to or file_from can not be closed, exit code is 100
 */
int main(int argc, char *argv[])
{
	int from_fd, to_fd;
	int read_bytes, write_bytes;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO,
				"Usage:cp file_from file_to\n");
		exit(97);
	}
	buffer = allocate_buffer(argv[2]);
	from_fd = open(argv[1], O_RDONLY);
	read_bytes = read(from_fd, buffer, 1024);
	to_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from_fd == -1 || read_bytes == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		write_bytes = write(to_fd, buffer, read_bytes);
		if (to_fd == -1 || write_bytes == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		read_bytes = read(from_fd, buffer, 1024);
		to_fd = open(argv[2], O_WRONLY | O_APPEND);
	} while (read_bytes > 0);

	free(buffer);
	close_file_descriptor(from_fd);
	close_file_descriptor(to_fd);
	return (0);
}
