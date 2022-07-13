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
	if(NULL == destination || NULL == SOURCE)
	{
		return NULL;
	}

	int index = 0, length = strlen(dest);

	while(src[index] != '\0')
	{
		dest[length] = src[index];
		length++;
		index++;
	}

	dest[length] = '\0';
	return dest;
}
