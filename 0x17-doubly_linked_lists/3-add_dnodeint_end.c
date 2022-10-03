#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end
 * of a dlistint_t list
 *
 * @head: head of the list
 * @n: value of the element data for new node
 *
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current_tailer = NULL;
	dlistint_t *new_node = NULL;

	/*Dynamic Memory Allocation for new_node*/
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	/*Loading element data to node*/
	new_node->n = n;

	/*Traversing to list end and loading new_node*/
	if (*head)
	{
		current_tailer = *head;

		while (current_tailer->next != NULL)
			current_tailer = current->next;

		new_node->next = NULL;
		new_node->prev = current_tailer;
		current_tailer->next = new_node;
		return (new_node);
	}

	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;

	return (*head);
}
