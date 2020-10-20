#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 *
 * @d: struct dog
 *
 * @name: char is name
 *
 * @age: float of age
 *
 * @owner: char is owner
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (dog != NULL)
	(*d).name = name;

	(*d).age = age;
	(*d).owner = owner;
}
