#include "search_algos.h"

/**
 * binary_search - A function to search for a value in a sorted array of integers
 * Uses the Binary Search Algorithm
 *
 * @array: A pointer to first element of array
 * @size: Number of Elements in array to be searched
 * @value: The Integer to Search for in array
 *
 * Return: The first index where value is on array, Otherwise -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t x = 0, lower = 0, midpoint = 0, higher = size - 1;

	if (array == NULL)
		return (-1);

	while (lower <= higher)
	{
		midpoint = (higher + lower) / 2;
		x = lower;

		printf("Searching in array: ");

		for (; x <= higher; ++x)
		{
			if (x != lower)
				printf(", %d", array[x]);
			else
				printf("%d", array[x]);
		}

		printf("\n");

		if (array[midpoint] < value)
			lower = midpoint + 1;
		else if (array[midpoint] > value)
			higher = midpoint - 1;
		else
			return (midpoint);
	}

	return (-1);
}
