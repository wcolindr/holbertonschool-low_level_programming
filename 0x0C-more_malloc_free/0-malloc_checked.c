#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memory with malloc
 *
 * @b: int is b
 *
 * Return: NULL and p
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = (void *)malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
