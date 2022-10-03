#include "lists.h"

/**
 * dlistint_len - returns the number of elements in
 * a double linked list
 *
 * @h: head of the list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int element_count;

	element_count = 0;

	if (h == NULL)
		return (element_count);

	/*Confirm h points to the origin node in DL-list*/
	while (h->prev != NULL)
		h = h->prev;

	/*Traverse list while adding element_no*/
	while (h != NULL)
	{
		element_count++;
		h = h->next;
	}

	return (element_count);
}
