#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - print all natural numbers from n to 98
 *
 * @n: int is n
 *
 * Return: 0
 */

void print_to_98(int n)
{
	int a;

	if (n < 98)
	{
		for (a = n; a <= 98; a++)
		{
			printf("%d", a);

			if (a != 98)
			printf(", ");
		}
	}
		if (n > 98)
		{
			for (a = n; a >= 98; a--)
			{
				printf("%d", a);

				if (a != 98)
				printf(", ");
			}
		}
		if (n == 98)
			printf("%d", 98);
		_putchar('\n');
}
