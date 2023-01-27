#include "search_algos.h"

/**
 * Linear_search - Searching for a value in an array of Integers
 * Using the Linear Search Algorithms
 *
 * @array: A pointer to Element[0] of the array to search in
 * @size: The number of elements in array
 * @value: The Value to search for
 *
 * Return: the first index where <value> is on the Array
 */
int linear_search(int *array, size_t size, int value)
{
	size_t x = 0;

	if (array == NULL)
		return (-1);

	for (; x < size; ++x)
	{
		printf("Value checked array[%ld] = [%d]\n", x, array[x]);

		if (array[x] == value)
			break;
	}

	if (x == size)
		return (-1);

	return (x);
}
