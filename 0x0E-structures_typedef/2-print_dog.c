#include "dog.h"
#include <stdio.h>

/**
* print_dog- print a struct dog.
* @d: point
*
* Return: no return.
*/

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name: (nil)\n");
	if (d->age < 0 || d->owner == NULL)
	{
		printf("(nil)\n");
	}
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
