#include "holberton.h"

/**
 * _strlen - length of string
 *
 * @s: char is s
 *
 * Return: a
 */

int _strlen(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{

	}
	return (a);
}

/**
 * rev_string - reverse a string
 *
 * @s: char is s
 */

void rev_string(char *s)
{
	int length, c;
	char *begin, *end, swap;

	length = _strlen(s);
	begin = s;
	end = s;

	for (c = 0; c < length - 1; c++)
	{
		end++;
	}

	for (c = 0; c < length / 2; c++)
	{
		swap = *end;
		*end = *begin;
		*begin = swap;

		begin++;
		end--;
	}
}
