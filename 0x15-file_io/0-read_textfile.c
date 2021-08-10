#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>

/**
 * read_textfile - reads a text file and prints in standard output.
 * @letters: letters number
 * @filename: file to read
 *
 * Return: a value
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int file_rd;
	int file_wr;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc((sizeof(char) * letters));
	if (buf == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	file_rd = read(fd, buf, letters);
	if (file_rd == -1)
		return (0);

	file_wr = write(STDOUT_FILENO, buf, file_rd);
	if (file_wr == -1)
		return (0);

	close(fd);
	free(buf);
	return (file_rd);
}
