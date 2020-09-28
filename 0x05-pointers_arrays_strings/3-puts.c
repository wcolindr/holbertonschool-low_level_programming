#include "holberton.h"

/**
 * _puts - print a string
 *
 * @str: char is str
 */

void _puts(char *str)
{

	for (; *str; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
