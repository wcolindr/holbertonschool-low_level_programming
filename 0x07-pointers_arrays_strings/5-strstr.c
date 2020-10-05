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
	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
