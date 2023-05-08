#include "main.h"

/**
 * read_textfile - function that reads text file and prints to console
 * @filename: name of the file to be read
 * @letters: maximum number of bytes to read
 * Return: number of byts_rd and printed on success, 0 on failure
 * or if filanme is NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *cache;
	ssize_t fd;
	ssize_t byts_wrtn;
	ssize_t byts_rd;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	cache = malloc(sizeof(char) * letters);
	byts_rd = read(fd, cache, letters);
	byts_wrtn = write(STDOUT_FILENO, cache, byts_rd);

	free(cache);
	close(fd);
	return (byts_wrtn);
}
