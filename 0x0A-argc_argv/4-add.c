#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - main function
 *
 * @argc: int is argc
 *
 * @argv: char is argv
 *
 * Return: 1 and 0
 */

int main(int argc, char *argv[])
{
	int add, i, c;

	if (argc == 0)
		printf("0\n");

	for (i = 1; i < argc; i++)
	{
		for (c = 0; argv[i][c] != '\0'; c++)
		{
			if (isdigit(argv[i][c]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[i]);
	}

	printf("%d\n", add);

	return (0);

}
