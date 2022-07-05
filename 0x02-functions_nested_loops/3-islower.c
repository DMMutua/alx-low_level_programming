#include "main.h"

/**
 * _islower - checks for lowercase characters or otherwise
 *
 * Return: 1 incase of a lowercase and 0 for otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	return (0);
}
