#include <stdio.h>

/**
 * main - main function
 *
 * Return: 0
 */

int main(void)
{
	unsigned long a, num1 = 1, num2 = 2, nextNum;

	for (a = 1; a < 98; a++)
	{
		printf("%lu, ", num1);
		nextNum = num1 + num2;
		num1 = num2;
		num2 = nextNum;

		if (a == 97)
		{
			printf("%lu", num1);
		}
	}
	putchar('\n');
	return (0);
}
