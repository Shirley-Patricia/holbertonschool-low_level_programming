#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - type struct.
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: Always 0.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t; 
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
