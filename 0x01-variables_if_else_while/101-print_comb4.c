#include <stdio.h>

/**
 * main - main function
 *
 * Return: 0
 */

int main(void)
{
	int i, c, z;

	for (i = 48; i <= 55; i++)
	{
		for (c = i + 1; c <= 56; c++)
		{
			for (z = c + 1; z <= 57; z++)
			{
				putchar(i);
				putchar(c);
				putchar(z);
				if (i + c + z <= 167)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
