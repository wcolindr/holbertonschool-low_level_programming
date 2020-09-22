#include "holberton.h"

/**
 * print_last_digit - print the last digit of a number
 *
 * @a: int is a
 *
 * Return: a
 */

int print_last_digit(int a)
{
	int b = a % 10;
	int c;

	if (b > 0)
	{
		c = b;
	}
	else if (b < 0)
	{
		c = b - b * 2;
	}
	else
	{
		c = 0;
	}
	_putchar(c + '0');
	return (c);
}
