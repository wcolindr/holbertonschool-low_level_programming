#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - print strings in parameters
 *
 * @separator: char is separator
 *
 * @n: unsigned int is n
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	unsigned int i;

	va_start(string, n);

	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			printf("%s", va_arg(string, char*));

			if (i < n - 1)
				printf("%s", separator);

			if (string == NULL)
				printf("%p", string);
		}
	}
	va_end(string);

	printf("\n");
}
