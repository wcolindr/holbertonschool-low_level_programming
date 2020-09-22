#include "holberton.h"

/**
 * times_table - prints the 9 times table
 *
 */

void times_table(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		_putchar('0');

		for (b = 1; b <= 9; b++)
		{
			if ((a * b) <= 9)
			{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			_putchar(a * b + '0');
			}
		else
		{
			_putchar(',');
			_putchar(' ');
			_putchar(a * b / 10 + '0');
			_putchar(a * b % 10 + '0');
		}
		}
		_putchar('\n');
	}
}
