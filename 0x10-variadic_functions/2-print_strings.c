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
	char *s;

	va_start(string, n);

		for (i = 0; i < n; i++)
		{
			s = va_arg(string, char *);

			if (s == NULL)
				printf("(nil)");

			else
				printf("%s", s);

			if (i < n - 1)
				if (separator != NULL)
					printf("%s", separator);
		}
	va_end(string);

	printf("\n");
}
