#include "holberton.h"

/**
 * _isupper - checks for uppercase characters
 *
 * @c: int is c
 *
 * Return: 0
 */

int _isupper(int c)
{
	char a;

	for (a = 'A'; a <= 'Z'; a++)
	{
		if (a == c)
			return (1);
	}
	return (0);
}
