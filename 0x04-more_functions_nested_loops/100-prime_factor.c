#include <stdio.h>

/**
 * main - main function
 *
 * Return: 0
 */

int main(void)
{
	long int num = 612852475143;
	int div = 2;

	while (num != div)
	{
		while (num % div != 0)
		{
			div++;
		}
		if (num == div)
		{
			break;
		}
		else
		{
			num = num / div;
			div = 2;
		}
	}
	printf("%ld\n", num);
	return (0);
}
