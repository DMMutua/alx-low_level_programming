#include "lists.h"

/**
 * listint_len - Counts the elements in a linked list
 * @h: The head of the linked list
 *
 * Return: The Number of elements in the list in question
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	if (h != NULL)
	{
		while (h)
		{
			h = h->next;
			count++;
		}
	}

	return (count);
}
