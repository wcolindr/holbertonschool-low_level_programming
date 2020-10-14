#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - return pointer to a newly allocated space
 *
 * @str: char is str
 *
 * Return: NULL and str
 */

char *_strdup(char *str)
{
	char *p;
	int i;

	for (i = 0; str[i]; i++)

		p = malloc(sizeof(char) * i + sizeof(char));

	if (p == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		p[i] = str[i];

	return (p);
}
