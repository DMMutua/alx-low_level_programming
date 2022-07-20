#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - recursively calculating the length of a string
 * @s: the string in question
 *
 * Return: Length of a string in int
 */

int _strlen_recursion(char *s)
{
	int len;

	if (*s != '\0')
	{
		len = _strlen_recursion(s + 1) + 1;
		return (len);
	}

	return (0);
}
