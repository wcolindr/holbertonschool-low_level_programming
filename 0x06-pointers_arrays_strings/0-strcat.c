#include "holberton.h"

/**
 * _strcat - concatenates 2 strings
 *
 * @dest: char is dest
 *
 * @src: char is src
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int c = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[c] != '\0')
	{
		dest[i] = src[c];
		c++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
