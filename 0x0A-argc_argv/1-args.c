#include <stdio.h>

/**
 * main - Entry point
 * @argc: Count
 * @argv:array
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%d\n", i);
return (0);
}
