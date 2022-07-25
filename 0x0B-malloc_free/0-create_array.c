#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * *create_array - creating an aray of characters
 * and initializing it with a specific character
 * @size: the size array being created
 * @c: character to initialize in array c
 *
 * Return: pointer to the array, NULL if error
 */

char *_create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}

	p = (char *) malloc(sizeof(char) * size);

	if (p == NULL)
		return (0);

	while (i < size)
	{
		*(p + i) = c;
		i++;
	}

	*(p + i) = '\0';

	return (p);
}

