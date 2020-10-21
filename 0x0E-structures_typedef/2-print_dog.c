#include "dog.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_dog - print struct dog
 *
 * @d: struct is d
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
	else
	{
		printf("(nil)");
	}
}
