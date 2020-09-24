#include "holberton.h"

/**
 * print_line - draw a straight line
 *
 * @n: int is n
 */

void print_line(int n)
{
	int a;

	if (n > 0)
	{
		for (a = 1; a <= n; a++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
