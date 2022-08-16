#include "lists.h"

/**
 * reverse_listint - Reverses a singly linked list
 * @head: the head of the list
 *
 * Return: Pointer to the new header
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next = NULL;

	if (head)
	{
		while (*head)
		{
			next = *head;
			*head = (*head)->next;
			next->next = prev;
			prev = next;
		}

		*head = prev;
		return (*head);
	}

	return (NULL);
}
