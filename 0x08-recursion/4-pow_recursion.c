#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - gives the value of x raised to exponent y
 * @x: base
 * @y: exponent
 *
 * Return: the value of x to power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else
	{
		if (y > 0)
		{
			return (x * (_pow_recursion(x, y - 1)));
		}
		else
		{
			return (1);
		}
	}
}
