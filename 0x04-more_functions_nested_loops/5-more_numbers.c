#include "main.h"

/*
 * more_numbers - Prints 10 times the numbers from 0 - 14
 *
 * Return: void
 */
void more_numbers(void)
{
	int c, z;

	for (z = 0; z <= 9; z++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c > 9)
				_putchar((c / 10) + '0');

			_putchar((c % 10) + '0');
		}

		_putchar('\n');
	}

}
