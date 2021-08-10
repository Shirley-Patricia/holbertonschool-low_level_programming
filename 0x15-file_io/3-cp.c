#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>

/**
 * main - Entry point.
 * @argc: count.
 * @argv: array.
 *
 * Return: a value
 */

int main(int argc, char **argv)
{
	char buf[1024];
	int file_from, file_to, file_read, file_wr, c1, c2;
	
	if (argc != 3)
    {
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        exit(97);
    }
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1 || file_from == 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        exit(98);
	}	
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to == -1)
		exit(99);

	file_read = read(file_from, buf, 1024);
	while (file_read > 0)
	{
		file_wr = write(file_to, buf, file_read);
		if (file_wr == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n" , argv[2]);
        	exit(99);
	}
	c1 = close(file_from);
	if (c1 == -1) 
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", c1);
        exit(100);
	}
	c2 = close(file_to);
	if (c1 == -1) 
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", c2);
        exit(100);
	}
	return (0);
}
    