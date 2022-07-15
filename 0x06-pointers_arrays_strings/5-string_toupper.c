#include "main.h"

/**
 * string_toupper - Changes all string lowers to uppers
 * @p: The string to be modified
 * Return: A string of characters
 */

char *string_toupper(char *p)
{
	int a = 0;

	while (p[a])
	{
		if (p[a] >= 97 && p[a] <= 122)
		{
			p[a] -= 32;
		}

		a++;
	}

	return (p);
}
