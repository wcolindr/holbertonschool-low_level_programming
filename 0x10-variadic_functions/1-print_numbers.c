#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - print numbers in parameter
 *
 * @separator: char is separator
 *
 * @n: unsigned int is n
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);

	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(list, int));

			if (i < n - 1)
				printf("%s", separator);
		}
	}
	va_end(list);

	printf("\n");
}
