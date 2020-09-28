#include "holberton.h"

/**
 * swap_int - swap the values of two integers
 *
 * @a: int is a
 *
 * @b: int is b
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
