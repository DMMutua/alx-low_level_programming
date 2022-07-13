#include "main.h"

/**
 * _strcmp - Compares two strings, works like 'strcpy'.
 * @s1: a string to be compared
 * @s2: another string to be compared
 *
 * Return: An Integer showing the difference in elements no.
 */

int _strcmp(char *s1, char *s2)
{
	int z = 0, y = 0;

	while (s1[z])
	{
		z++;
	}

	while (s2[y])
	{
		y++;
	}

	int a = 0;
	a = z - y;

	return (a);
}
