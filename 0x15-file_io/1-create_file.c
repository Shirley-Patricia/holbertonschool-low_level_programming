#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>

/**
 * create_file - create a file.
 * @text_content: string to write in the filename
 * @filename: name of the file
 *
 * Return: a value
 */

int create_file(const char *filename, char *text_content)
{
	int count;
	int file_rd;
	int file_wr;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
	{
		file_rd = open(filename, O_CREAT | O_RDWR);
		close(file_rd);
		return (1);
	}

	file_rd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 00600);
	if (file_rd == -1)
		return (-1);

	count = 0;
	while (text_content[count])
	{
		count++;
	}

	file_wr = write(file_rd, text_content, count);
	if (file_wr == -1)
		return (-1);

	close(file_rd);
	return (1);
}
