#include "function_pointers.h"

/**
 * array_iterator - executes a function given as parameter
 * to each member of an array
 * @array: the array in questoon
 * @size: the size of array
 * @action: pointer to function containing the action
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array != 0 && size != 0 && action != 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
