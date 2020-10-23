#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - sum of all parameters
 *
 * @n: unsigned int is n
 *
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list sumall;
	int add = 0;
	unsigned int i;

	va_start(sumall, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		add += va_arg(sumall, unsigned int);
	}

	va_end(sumall);

	return (add);
}
