#include "holberton.h"

/**
 * print_diagonal - draw a diagonal line
 *
 * @n: int is n
 */

void print_diagonal(int n)
{
	int a, b = 0, c;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			for (c = n; c <= n + b; c++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			b = b + 1;
		}
	}
	else
	{
		_putchar('\n');
	}
}
