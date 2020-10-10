#include <stdio.h>

/**
 * main - main functions
 *
 * @argc: int is argc
 *
 * @argv: char is argv
 *
 * Return: 0
 */

int main (int argc, char *argv[])
{
	int counter;

	for(counter = 0; counter < argc; counter++)

		printf("%s\n",argv[counter]);
	
	return (0);
}
