#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line
 * @s: the string in question
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	int i = 0;

	for (i; s[i] != '\0'; i++)
	{
		if (*s != '\0')
		{
			_putchar(*s);
			_puts_recursion(s + 1);
		}
		else
			_putchar('\n');
	}
}
