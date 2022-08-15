#include "lists.h"

/**
 * sum_listint - returns the sum of all the data(n) of a
 * listint_t linked list
 * @head: The head of the linked list
 *
 * Return: Sum of all data(n) linked list, 0 if empty list
 */
int sum_listint(listint_t *head)
{
	int amount = 0;

	if (head)
	{
		while (head)
		{
			amount += head->n;
			head = head->next;
		}
	}

	return (amount);
}
