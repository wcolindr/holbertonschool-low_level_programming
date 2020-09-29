#include "holberton.h"

/**
 * print_rev - print string in reverse
 *
 * @s: char is s
 *
 */

void print_rev(char *s)
{
	int count;

	while (*s != '\0')
	{
		s++;
		count++;
	}

	while (count > 0)
	{
		count--;
		s--;
		_putchar(*s);
	}
	_putchar('\n');
}
