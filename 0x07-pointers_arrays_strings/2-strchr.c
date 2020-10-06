#include "holberton.h"
#include <stddef.h>

/**
 * _strchr - locate character in a string
 *
 * @s: char is s
 *
 * @c: char is c
 *
 * Return: s and NULL
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == 0)
		return (s);
	return (NULL);
}
