#include "main.h"

/**
 * _strncat - Concatenates two Strings, using only n bytes
 * from the source string src
 * @src: the source string
 * @dest: the destination string
 * @n: byte limit of the concatanation in the source string
 *
 * Return: A pointer to the resultant string destination
 */

char *_strncat(char *dest, char *src, int n)
{
	int dlen = 0, w = 0;

	while (dest[dlen])
	{
		dlen++;
	}

	while (w < n && src[w])
	{
		dest[dlen] = src[w];
		dlen++;
		w++;
	}

	dest[dlen + n + 1] = '\0';

	return (dest);
}

