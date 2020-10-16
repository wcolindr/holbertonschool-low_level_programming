#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - create an array of integers
 *
 * @min: int is min
 *
 * @max: int is max
 *
 * Return: s and NULL
 */

int *array_range(int min, int max)
{
	int *s;
	int i = 0;
	int j = 0;

	if (min > max)
		return (NULL);

	s = malloc(sizeof(int) * j);

	if (s == NULL)
		return (NULL);

	for (i = min; i < max; i++)
		s[i] = i;

	for (j = min; j < max; j++)
		s[j] = j;

	return (s);
}
