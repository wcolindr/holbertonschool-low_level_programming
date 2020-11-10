#include "holberton.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>

/**
 * append_text_to_file - append to a file
 *
 * @filename: name of file
 *
 * @text_content: content of the file
 *
 * Return: 1 or -1 if fails
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fp, paste;
	int length = 0;

	fp = open(filename, O_WRONLY | O_APPEND);

	if (filename == NULL || fp == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (; text_content[length]; length++)
		{
		}

		paste = write(fp, text_content, length);

		if (paste == -1)
			return (-1);
	}
	close(fp);

	return (1);
}
