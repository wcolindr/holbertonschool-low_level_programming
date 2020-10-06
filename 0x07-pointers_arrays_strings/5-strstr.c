#include "holberton.h"
#include <stddef.h>

/**
 * _strstr - locate a substring
 *
 * @haystack: char is haystack
 *
 * @needle: char is needle
 *
 * Return: haystack and NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int length;
	int i;
	int j;

	for (length = 0; needle[length] != '\0'; length++)
	{
	}
	if (length < 1)
		return (haystack);
	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (; haystack[i + j] == needle[j]; j++)
			{
			}
			if (needle[j] == '\0')
				return (haystack + i);
		}
	}
	return (NULL);
}
