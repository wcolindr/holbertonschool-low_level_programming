#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create array of chars
 *
 * @size: int is size
 *
 * @c: char is c
 *
 * Return: NULL and s
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	int i;

	s = malloc(sizeof(char) * c);

	if (s == NULL || size == 0)
		return (NULL);

	for (i = 0; i < c; ++i)
		s[i] = c;

	return (s);
}
