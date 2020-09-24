#include "holberton.h"

/**
 * _isdigit - checks for a digit
 *
 * @c: int is c
 *
 * Return: 0
 */

int _isdigit(int c)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		if (a == c)
			return (1);
	}
	return (0);
}
