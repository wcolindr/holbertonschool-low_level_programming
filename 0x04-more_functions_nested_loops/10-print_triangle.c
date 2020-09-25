#include "holberton.h"

/**
 * print_triangle - draw a triangle with #
 *
 * @size: int is size
 *
 */

void print_triangle(int size)
{

	int a, b, c;

	if (size > 0)
	{
		for (a = size; a >= 1; a--)
		{
			for (b = 2; b <= a; b++)
			{
				_putchar(' ');
			}
			for (c = size; c >= a; c--)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
