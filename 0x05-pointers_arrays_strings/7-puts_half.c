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
 * puts_half - print half of string
 *
 * @str: char is str
 */

void puts_half(char *str)
{
	int i;

	for (i = 5; i < _strlen(str); i += 1)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
