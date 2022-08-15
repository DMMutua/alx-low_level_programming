#include "lists.h"

/**
 * get_nodeint_at_index - get the nth node of a linked list
 * @head: the head of the linked list
 * @index: the index of the node to be gotten
 *
 * Return: the nth node of the linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head)
	{
		while (head)
		{
			if (count == index)
				return (head);

			head = head->next;
			count++;
		}
	}

	return (NULL);
}
