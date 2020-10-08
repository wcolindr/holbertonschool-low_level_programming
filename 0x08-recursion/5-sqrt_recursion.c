#include "holberton.h"

/**
 * findSquare - helper function for _sqrt_recursion
 *
 * @n: int is n
 *
 * @i: int is i
 *
 * Return: i
 */

int findSquare(int n, int i)
{

	if (i * i == n)
		return (i);

	else if (i * i > n)
		return (-1);

	return (findSquare(n, i + 1));
}

/**
 * _sqrt_recursion - square root of natural numbers
 *
 * @n: int is n
 *
 * Return: n
 */

int _sqrt_recursion(int n)
{
	return (findSquare(n, 1));
}
