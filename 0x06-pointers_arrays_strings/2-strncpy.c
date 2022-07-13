#include "main.h"

/*
 * _strncpy - Copies a string to another String, behaving
 * exactly like the standard strncpy function
 * @src: the string to be copied from
 * @dest: the string to be copied to
 * @n: the limiting int variable of src to be copied
 *
 * Return: A pointer to the dest string copied to
 */

char *_strncpy(char *dest, char *src, int n)
{
	int z;

	for (z = 0; z < n && src[z] != '\0'; z++)
	{
		dest[z] = src[z];
	}

	for ( ; z < n; z++)
	{
		dest[z] = '\0';
	}

	return (dest);
}
