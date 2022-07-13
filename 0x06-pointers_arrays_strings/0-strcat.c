#include "main.h"
#include <stdio.h>

/**
 * _strcat - appending the src string to the dest string
 * @dest: the destination string
 * @src: the source string
 *
 * Return: Pointer to the new string
 */

char *_strcat(char *dest, char *src)
{
	int dlen = 0, i;

	while (dest[dlen])
	{
		dlen++
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[dlen] = src[i];
		dlen++;
	}

	dest[dlen] = '\0';
	return (dest);
}
