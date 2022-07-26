#include "main.h"
/**
 * read_textfile - reads a text file and prints it to POSIX standard output
 * @filename: file to read
 * @letters: number of letters it should read and print
 * Return: actual number of letters it should read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *fd;
	ssize_t i, j, k;

	if (filname == NULL)
		return (0);
	fd = malloc(sizeof(char) * letters);
		if (fd == NULL)
		return (0);
		else
		{
			i = open(*filename, O_RDONLY)
		}
		if (i == -1)
		{
			return (0);
			j = read(i, fd, letters);
		}
		if (j == -1)
		{
			free(fd);
			return (0);
		}
		k = write(STDOUT_FILENO, fd, j)
			if (k == -1)
			{
				if (w != r)
					free(fd);
				return (0);
			}

	close(i);
	return (k);
}
