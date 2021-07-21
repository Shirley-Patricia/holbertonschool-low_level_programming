#include "dog.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
* new_dog- create a new dog.
* @name: dog's name
* @age: dog's age
* @owner: dog's owner
*
* Return: return 0.
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	char *nom;
	char *pro;
	int i = strlen(name);
	int j = strlen(owner);

	nom = malloc(sizeof(char) * i);
	if (nom == NULL)
	{
		return (NULL);
	}
	nom = name;
	pro = malloc(sizeof(char) * j);
	if (pro == NULL)
	{
		return (NULL);
	}
	pro = owner;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->name = nom;
	new->age = age;
	new->owner = pro;
	return (new);
}
