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
	unsigned int i;

	s = (char *)malloc(nmemb * size);

	if (s == NULL)
	{
		free(s);
		return (NULL);
	}

	if (nmemb == 0 || size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		s[i] = size;

	return (s);
}
