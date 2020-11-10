#include "holberton.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile - read and print file to POSIX
 *
 * @filename: name of the file
 *
 * @letters: number of characters
 *
 * Return: letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	char store;

	letters = 0;

	fp = fopen(filename, "r");

	if (filename == NULL)
		return (0);

	for (store = getc(fp); store != EOF; store = getc(fp))
	{
		write(1, &store, 1);
		letters = letters + 1;
	}

	fclose(fp);

	return (letters);
}
