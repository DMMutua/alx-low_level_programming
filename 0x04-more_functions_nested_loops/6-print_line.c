#include "main.h"

/*
 * print_line - Prints a Straight Line in Terminal
 * @n: The number of _ characters to be printed.
 *
 * Returns: void
 */
void print_line(int n)
{
	int length;

	if (n > 0)
	{
		for (length = 1; length <= n; length++)
			_putchar('_');
	}

	_putchar('\n');
}
