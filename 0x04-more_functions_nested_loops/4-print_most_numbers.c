#include "main.h"

/*
 * print_most_numbers - Prints all numbers from 0 - 9 except 2 and 4
 * 
 * Return: void
 */
void print_most_numbers(void)
{
	int c;
	
	for (c = 0; c <= 9; c++)
	{
		if (c != 2 && c != 4)
			_putchar((c % 10) + '0');
	}

	_putchar('\n');
}
