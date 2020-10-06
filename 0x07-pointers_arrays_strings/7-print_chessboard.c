#include "holberton.h"

/**
 * print_chessboard - print chessboard
 *
 * @a: char is a
 *
 *
 */

void print_chessboard(char (*a)[8])
{
	int length;
	int width;

	for (length = 0; length <= 7; length++)
	{
		for (width = 0; width <= 7; width++)
		{
			_putchar(a[length][width]);
		}
		_putchar('\n');
	}
}
