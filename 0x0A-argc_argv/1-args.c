#include <stdio.h>

/**
 * main - main function
 *
 * @argc: int is argc
 *
 * @argv: char is argv
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int counter;
	int sum = 0;

	for (counter = 0; counter < argc; counter++)
		sum = sum + *argv[counter];

	printf("%d\n", counter - 1);

	return (0);
}
