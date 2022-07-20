#include <stdio.h>
#include "main.h"

int factorial(int n)
{
	int res;

	if (n < 0)
	{
		return (-1);
	}

	if (n <= 1)
	{
		return (n);
	}

	return (n * factorial(n - 1));
}