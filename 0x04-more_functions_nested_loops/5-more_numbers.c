#include "holberton.h"

/**
 * more_numbers - prints 0 to 14 ten times
 */

void more_numbers(void)
{
	int a, b;

	for (b = 1; b <= 10; b++)
	{
		for (a = 0; a <= 14; a++)
		{
			if (a > 9)
				_putchar((a / 10) + '0');
			_putchar((a % 10) + '0');
		}
		_putchar('\n');
	}
}
