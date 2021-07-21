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

	nom = malloc(sizeof(char) * (i + 1));
	if (nom == NULL)
	{
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
	{
		nom[i] = name[i];
	}
	nom[i] = '\0';
	pro = malloc(sizeof(char) * (j + 1));
	if (pro == NULL)
	{
		free(nom);
		return (NULL);
	}
	for (j = 0; owner[j] != '\0'; j++)
	{
		pro[j] = owner[j];
	}
	pro[j] = '\0';
	new = malloc(sizeof(dog_t));
	if (new == NULL)
	{
		free(nom);
		free(pro);
		return (NULL);
	}
	new->name = nom;
	new->age = age;
	new->owner = pro;
	return (new);
}
