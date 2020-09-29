#include "holberton.h"

/**
 * _strlen - length of string
 *
 * @s: char is s
 *
 * Return: a
 */

int _strlen(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{

	}
	return (a);
}

/**
 * puts2 - print every other character
 *
 * @str: char is str
 */

void puts2(char *str)
{
	int i;

	for (i = 0; i < _strlen(str); i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
