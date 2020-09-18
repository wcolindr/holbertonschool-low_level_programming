#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 *
 * Return: 0
 */

int main(void)
{
	int i, c;

	for (i = 48; i <= 56; i++)
	{
		for (c = i + 1; c <= 57; c++)
		{
			putchar(i);
			putchar(c);

			if (i + c <= 112)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
