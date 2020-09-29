#include "holberton.h"

/**
 * puts_half - print half of string
 *
 * @str: char is str
 */

void puts_half(char *str)
{
	int count;
	int counting;

	while (*str != '\0')
	{
		count++;
		str++;
	}

	if (count % 2 == 0)
		counting = count / 2;
	else
		counting = (count - 1) / 2;

	while (counting != 0)
	{
		counting--;
		str--;
	}

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
