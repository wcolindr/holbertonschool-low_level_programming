#include "holberton.h"

/**
 * _memcpy - copies memory area
 *
 * @dest: char is dest
 *
 * @src: char is src
 *
 * @n: int is n
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
