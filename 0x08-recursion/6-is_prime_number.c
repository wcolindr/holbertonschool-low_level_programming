#include "holberton.h"

/**
 * findPrime - helper function for is_prime_number
 *
 * @n: int is n
 *
 * @i: int is i
 *
 * Return: i
 */

int findPrime(int n, int i)
{

	if (n <= 1)
		return (0);

	if (n % i == 0)
		return (0);

	if (i * i > n)
		return (1);

	return (findPrime(n, i + 1));
}

/**
 * is_prime_number - function that returns 1 if its a prime number
 *
 * @n: int is n
 *
 * Return: n
 */

int is_prime_number(int n)
{
	return (findPrime(n, 2));
}
