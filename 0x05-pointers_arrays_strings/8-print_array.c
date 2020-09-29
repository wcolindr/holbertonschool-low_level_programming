#include "holberton.h"
#include <stdio.h>

/**
 * print_array - print elements of an array
 *
 * @a: int is a
 *
 * @n: int is n
 */

void print_array(int *a, int n)
{

	for (n = 0; n < 5; n++)
	{
		printf("%d", a[n]);

		if (n < 4)
			printf(", ");
	}
	printf("\n");
}
