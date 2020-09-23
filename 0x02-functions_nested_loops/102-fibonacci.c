#include <stdio.h>

/**
 * main - main function
 *
 * Return: 0
 */

int main(void)
{
	long int a, num1 = 1, num2 = 2, nextNum;

	for (a = 1; a < 50; a++)
	{
		printf("%ld, ", num1);
		nextNum = num1 + num2;
		num1 = num2;
		num2 = nextNum;

		if (a == 49)
		{
			printf("%ld", num1);
		}
	}
	putchar('\n');
	return (0);
}
