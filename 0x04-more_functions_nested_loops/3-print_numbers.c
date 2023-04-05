#include "main.h"

/* print_numbers - Prints numbers from 0 - 9 followed by new line
 *
 * Returns: Returns Nothing
 */
void print_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		/*Converting the integer to a character and printing.*/
		_putchar((c % 10) + '0');
	}

	_putchar('\n');
}
