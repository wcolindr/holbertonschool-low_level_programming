#include "holberton.h"

/**
 * _strlen - length of a string
 *
 * @s: char is s
 *
 * Return: s
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);

	else
		return (1 + _strlen(s + 1));
}

/**
 * checkPalindrome - helper function for is_palindrome
 *
 * @s: char is s
 *
 * @i: int is i
 *
 * Return: s and i
 */

int checkPalindrome(char *s, int i)
{
	int length = _strlen(s) - 1;

	if (s[i] != s[length - i])
		return (0);

	if (i < length)
		return (checkPalindrome(s, i + 1));

	return (1);
}

/**
 * is_palindrome - return 1 if string is a palindrome
 *
 * @s: int is s
 *
 * Return: s
 */

int is_palindrome(char *s)
{
	if (checkPalindrome(s, 0) == 1)
		return (1);

	else
		return (0);
}
