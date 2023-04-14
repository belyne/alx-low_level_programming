#include <stdio.h>
#include <stdlib.h>
#include "main.h"

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - function that allocates bytes for a buffer
 * @file: the file buffer where chars are stored in
 * Return: a tpointer to the newly allocated buffer
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer  == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - function that closes the file descriptors
 * @fd: the file descriptor to be closed
 */
void close_file(int fd)
{
	int name;

	name = close(fd);

	if (name == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cant't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - function that copies the contnet of a file to another file
 * @argc: numb arguments to be supplied to the program
 * @argv: array of pointer to the arguments
 * Return: always 0
 * if number of arguments i not the correct one, exit with code 97 and print
 * usage: cp file_from file_to, followed by a new line, on the POSIX standard error
 * if file_to already exists, turncate it
 * or if file_from does not exit, or if you can not read it, exit with code 98 and
 * print error message followed by a new line, on the POSIX standrd error
 * if you can not create or of write to file_to fails, exit with code 99 and print
 * error message followed by a new line, ont hte POSIX standard error
 * if if you can not close the file descriptor, exit with code 100 and print
 * error message , followed ny a new line, on the POSIX standard error
 */
int main(int argc, char *argv[])
{
	int old_copy, new_copy, num, fnc;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = create_buffer(argv[2]);
	old_copy = open(argv[1], O_RDONLY);
	fnc = read(old_copy, buffer, 1024);
	new_copy = open(argv[2], O_CREAT | O_TRUNC, 0664);

	do {
		if (old_copy == -1 || num == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		fnc = write(new_copy, buffer, num);
		if (new_copy == -1 || fnc == -1)
		{
			dprintf(STDERR_FILENO, "Erro: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		num = read(old_copy, buffer, 1024);
		new_copy = open(argv[2], O_WRONLY | O_APPEND);
	} while (fnc > 0);

	free(buffer);
	close_file(old_copy);
	close_file(new_copy);

	return (0);
}
