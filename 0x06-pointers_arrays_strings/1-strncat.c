#include "holberton.h"

/**
 * _strncat - concatenates 2 strings
 *
 * @dest: char is dest
 *
 * @src: char is src
 *
 * @n: int is n
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int c = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (c < n && src[c] != '\0')
	{
		dest[i] = src[c];
		c++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
