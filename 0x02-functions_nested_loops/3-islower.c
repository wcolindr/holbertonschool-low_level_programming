#include "holberton.h"

/**
 * _islower - checks for lowercase characters
 *
 * @c: int is c
 *
 * Return: 1
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);

	else
		return (0);
}
