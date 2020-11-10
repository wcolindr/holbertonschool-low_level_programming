#include "holberton.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>

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
	int fp;
	int byte = 0, paste = 0;
	char *store;

	if (filename == NULL || letters <= 0)
		return (0);

	fp = open(filename, O_RDONLY);

	store = malloc(letters * sizeof(char));

	if (store == NULL)
		return (0);

	byte = read(fp, store, letters);

	if (byte == -1)
		return (0);

	paste = write(STDOUT_FILENO, store, byte);

	if (paste == -1)
		return (0);

	close(fp);

	free(store);

	return (paste);
}
