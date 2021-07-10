#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Count
 * @argv:array
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int x, y;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		printf("%d\n", x * y);
	}
	return (0);
}
