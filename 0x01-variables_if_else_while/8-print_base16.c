#include <stdio.h>

/**
 * main - Prints a base 16 string of numbers
 *
 * Return: Always (Success)
 */
int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}

	for (c = 'a'; c<= 'f'; c++)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}
