#include "holberton.h"

/**
 * _pow_recursion - the value of x to the power of y
 *
 * @x: int is x
 *
 * @y: int is y
 *
 * Return: value of x^y
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);

	else if (y < 0)
		return (-1);

	else
		return (x * _pow_recursion(x, y - 1));
}
