#include "lists.h"

/**
 * list_len - Calculates the no. of elements in list_t list
 * @h: the linked list
 *
 * Return: The number of elements in the linked list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}

	return (count);
}
