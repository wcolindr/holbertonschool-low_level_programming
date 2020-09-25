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
	long int ans;

	while (num % div != 0)
	{
		div++;
	}
	ans = num / div;
	printf("%ld\n", ans);
	return (0);
}
