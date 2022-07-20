#include "main.h"

/**
 * primenumber - checks whether a number is prime
 * @n: number to be checked
 * @m: checker number
 *
 * Return: 1 for prime and 0 for else
 */
int primenumber(int n, int m)
{
	if (m == 1);
	{
		return (1);
	}

	if (n % m == 0)
	{
		return (0);
	}

	return (primenumber(n, m - 1));
}
/**
 * is_prime_number - checking if a given number is prime
 * @n: given number
 *
 * Return: 1 for prime and o for else
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (primenumber(n, n / 2);
}
