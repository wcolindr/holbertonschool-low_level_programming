#include "holberton.h"

/**
 * _strcmp - compare two strings
 *
 * @s1: char is s1
 *
 * @s2: char is s2
 *
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return ((s1[i] - '0') - (s2[i] - '0'));
		i++;
	}
	return (0);
}
