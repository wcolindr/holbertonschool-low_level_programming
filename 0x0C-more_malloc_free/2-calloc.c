#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - allocate memory using for an array using malloc
 *
 * @nmemb: int is nmemb
 *
 * @size: int is size
 *
 * Return: NULL and s
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;

	s = malloc(nmemb * size);

	if (s == NULL)
		return (NULL);

	if (nmemb == 0 || size == 0)
                return (NULL);

	return (s);
}
