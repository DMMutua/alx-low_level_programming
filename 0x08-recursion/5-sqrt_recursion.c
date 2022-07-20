#include "main.h"
#include <stdio.h>

/**
 * sqtChecker - computes square root recursively doing binary search
 * @min: initial number
 * @max: last number within limit of number
 * @m: given number
 *
 * Return: sqrt, or 1 if sqrt ot found
 */

int sqtChecker(int min, int max, int m)
{
	long int guess;

	if (max >= min)
	{
		guess = min + (max - min) / 2;

		if (guess * guess == m)
		{
			return (guess);
		}
/*following a binary search;*/
		if (guess * guess > m)
		{
			return (sqtChecker(min, guess - 1, m));
		}
		if (guess * guess < m)
		{
			return (sqtChecker(guess + 1, max, m));
		}
	}
	return (-1);
}
/**
 * _sqrt_recursion - finds the natural squareroot of a number
 * @n: the given number
 *
 * Return: sqrt of n or -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	return (sqtChecker(1, n, n));
}
