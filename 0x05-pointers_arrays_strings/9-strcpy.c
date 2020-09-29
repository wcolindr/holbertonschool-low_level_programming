#include "holberton.h"

/**
 * _strcpy - copy a string to another string
 *
 * @dest: char is dest
 *
 * @src: char is src
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	unsigned char i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i] |= '\0';
	return (dest);
}
