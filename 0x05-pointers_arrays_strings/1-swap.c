#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 * @a: An integer to swap
 * @b: second integer to swap
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int w;

	w = *a;
	*a = *b;
	*b = w;
}
