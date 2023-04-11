#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - function that reads a text file and prints
 * it to the POSIX standard output
 * where leters is the number of letters it should read and print
 * @filename: text file to be read
 * @letters: number of lters it should read and print
 * Return: num- the actual number of letters it could read and print
 * if the file can not be opened or read, return 0, also if the
 * filename is NULL return 0; or if write fails or does not write
 * the expected amount of bytes, return 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *fun;
	ssize_t fd;
	ssize_t num;
	ssize_t k;

	if (filename == NULL)
		return (0);
	fun = malloc(sizeof(char) * letters);
	if (fun == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	k = read(fd, fun, letters);
	num = write(STDOUT_FILENO, fun, k);

	if (fd == -1 || k == -1 || num == -1 || num != k)
	{
		free(fun);
		return (0);
	}

	free(fun);
	close(fd);

	return (num);
}
