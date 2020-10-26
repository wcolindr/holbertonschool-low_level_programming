#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - print all types of arguments
 *
 * @format: format
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	int len;
	int n = 0;

	va_start(args, format);

	while (format[len] != '\0')
		len++;

	while (i < len)
	{
		n = 1;
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(args, int));
			break;
		case 'i':
			printf("%i", va_arg(args, int));
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			break;
		case 's':
			if (args == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", va_arg(args, char *));
			break;
		default:
			n = 0;
			break;
		}
		if (n == 1 && i < len - 1)
			printf(", ");
		i++;
	}
	va_end(args);

	printf("\n");
}
