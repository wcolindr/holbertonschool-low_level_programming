#include "holberton.h"
#include <stddef.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 *
 * @s: char is s
 *
 * @accept: char is accept
 *
 * Return: s and NULL
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		if (*s == *accept)
		{
			return (s - 1);
		}
		s++;
		accept++;
	}
	return (NULL);
}
