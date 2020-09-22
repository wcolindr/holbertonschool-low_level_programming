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
	for (; n < 98; n++)
	{
		printf("%d, ", n);
	}
	_putchar('\n');

	for (; n > 98; n--)
	{
		printf("%d, ", n);
	}
	_putchar('\n');

	if (n == 98)
	{
		printf("%d", n);
	}
	_putchar('\n');
}
