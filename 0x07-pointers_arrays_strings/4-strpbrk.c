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
	int count;

	for (; *s != '\0'; s++)
	{
		for (count = 0; accept[count] != '\0'; count++)
		{
			if (*s == accept[count])
				return (s);
		}
	}
	return (NULL);
}
