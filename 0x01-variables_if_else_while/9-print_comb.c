#include <stdio.h>

/**
 * main - Prints a Series of Single digit Numbers
 *
 * Return: Always (Success);
 */
int main(void)
{
	int s;

	for (s = '0'; s <= '9'; s++)
	{
		putchar(s);

		if (s != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
