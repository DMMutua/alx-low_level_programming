#include "lists.h"

/**
 * free_listint - Frees memory occupied by a linked list
 * @head: : The head of the Linked List
 *
 * Return: Void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}

	free(head);
}
