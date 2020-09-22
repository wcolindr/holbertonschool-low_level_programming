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
	int b;

	if (a >= 10)
	{
		b = a % 10;
	}
	else
	{
		b = -a % 10;
	}
	_putchar(b + '0');
	return (b);
}
