#include "holberton.h"

/**
 * print_alphabet - print the alphabet in lowercase
 *
 *
 *
 */

void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
