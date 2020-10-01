#include "holberton.h"

/**
 * reverse_array - reverse content of an array
 *
 * @a: char is a
 *
 * @n: int is n
 *
 */

void reverse_array(int *a, int n)
{
	int c, t, b;

	b = n - 1;

	for (c = 0; c < n / 2; c++)
	{
		t = a[c];
		a[c] = a[b - c];
		a[b - c] = t;
	}
}
