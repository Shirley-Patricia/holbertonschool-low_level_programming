#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * cp - Entry point.
 * @file_from: count.
 * @file_to: array.
 *
 * Return: a value
 */

void cp(char *file_from, char *file_to)
{
	char buf[1024];
	int fd, fd2, file_wr, fd_read;

	fd = open(file_from, O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	fd2 = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	while ((fd_read = (read(fd, buf, 1024))) > 0)
	{
		file_wr = write(fd2, buf, fd_read);
		if (file_wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}
	if (fd_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	if (close(fd2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
}

/**
 * main - Entry point.
 * @argc: count.
 * @argv: array.
 *
 * Return: a value
 */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	cp(argv[1], argv[2]);
	return (0);
}
