#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse order
 * recursively followed by a new line
 * @s: the pointer to a string in question
 *
 * Return: Void
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
