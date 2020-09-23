#include <stdio.h>

/**
 * main - main function
 *
 * Return: 0
 */

int main(void)
{
	int sum, num1 = 1, num2 = 2, evenNum = 2;

	for (; num1 + num2 < 4000000;)
	{
		sum = num1 + num2;
		num1 = num2;
		num2 = sum;

		if (sum % 2 == 0)
		{
			evenNum += sum;
		}
	}
	printf("%d\n", evenNum);
	return (0);
}
