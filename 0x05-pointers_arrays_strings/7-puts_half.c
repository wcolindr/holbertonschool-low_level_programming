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
	int m;
	int count = 1;
	int e;

	while (str[e] != '\0')
	{
		count++;
		e++;
	}

	if (count % 2)
		m = count / 2;
	else
		m = (count - 1) / 2;

	for (i = m; i < _strlen(str); i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
