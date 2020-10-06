#include "holberton.h"

/**
 * _memset - fill memory with constant byte
 *
 * @s: char is s
 *
 * @b: char is b
 *
 * @n: int is n
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n--)
	{
		s[n] = b;
	}

	return (s);
}
