#include <stdio.h>

/**
 * filename - print file name that was compiled from
 */

void filename(void)
{
	printf("%s\n", __FILE__);
}

/**
 * main - main function
 *
 * @argc: int is argc
 *
 * @argv: char is argv
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	(void) argc;
	(void) **argv;
	filename();
	return (0);
}
