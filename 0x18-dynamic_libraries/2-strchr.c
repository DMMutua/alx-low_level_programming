#include "main.h"
#include <stdio.h>

/**
 * *_strchr - locating a character in a string
 * @s: the string in question
 * @c: the character to search for
 *
 * Return: a pointer to first occurence, NULL if the character
 * is not found
 */
char *_strchr(char *s, char c)
{
	int a;

	while (1)
	{
		a = *s++;
		if (a == c)
		{
			return (s - 1);
		}
		if (a == 0)
		{
			return (NULL);
		}
	}
}
