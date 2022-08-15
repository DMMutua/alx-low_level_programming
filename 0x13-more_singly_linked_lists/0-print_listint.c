#include "lists.h"

/**
 * print_listint - Prints all elements ofan listint_t list
 * @h: The linked list in question
 *
 * Return: The number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	if (h != NULL)
	{
		while (h)
		{
			printf("%d\n", h->n);
			h = h->next;
			count++;
		}
	}

	return (count);
}
