#include "lists.h"

/**
 * sum_dlistint - Sum of all data (n) in a doubly linked list
  * @head: The head of the doubly linked list
  *
  * Return: The sum of all data
  */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current_node = head;
	int list_data_sum = 0;

	if (head)
	{
		while (current_node != NULL)
		{
			list_data_sum += current_node->n;
			current_node = current_node->next;
		}
	}

	return (list_data_sum);
}
