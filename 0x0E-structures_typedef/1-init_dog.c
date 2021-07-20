#include "dog.h"
/**
 * init_dog - initializes a variable of type struct dog
 *
 * @d: dog structure
 * @name: dog name
 * @age: dog name
 * @owner: dog owner
 *
 * Return: no return
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
