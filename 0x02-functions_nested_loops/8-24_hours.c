#include "holberton.h"

/**
 * jack_bauer - print every minute of the day of Jack Bauer
 *
 * Return: minutes of Jack Bauer
 *
 */

void jack_bauer(void)
{
	int a, c;

	for (a = 0; a <= 23; a++)
	{
		for (c = 0; c <= 59; c++)
		{
			_putchar((a / 10) + '0');
			_putchar((a % 10) + '0');
			_putchar(':');
			_putchar((c / 10) + '0');
			_putchar((c % 10) + '0');
			_putchar('\n');
		}
	}
}
