#include "main.h"

/**
 * *_memset - fills defined memory with constant byte
 * @s: memory area to be filled
 * @b: char to copy
 * @n: number of iterations to copy b in memory
 *
 * Return: pointer to memory ara s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
