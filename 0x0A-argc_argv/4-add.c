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
int sum;
	sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	argv++;
	while (*argv != NULL)
	{
		char *s = *argv;

		while (*s != '\0')
		{
			if (*s < '0' || *s > '9')
			{
				printf("Error\n");
				return (1);
			}
			s++;
		}
		sum += atoi(*argv);
		argv++;
	}
	printf("%d\n", sum);
	return (0);
}
