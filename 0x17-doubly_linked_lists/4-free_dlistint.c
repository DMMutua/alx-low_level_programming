#include "lists.h"

/**
 * free_dlistint - Free a doubly linked list
  * @head: The head of the doubly linked list
  *
  * Return: Nothing
  */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current_node = head, *next = NULL;

	while (current_node != NULL)
		/*traverse the list while freeing nodes*/
	{
		next = current_node->next;
		free(current_node);
		current_node = next;
	}
}
