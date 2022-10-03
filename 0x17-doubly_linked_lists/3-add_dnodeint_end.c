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
	dlistint_t *current_tailer;
	dlistint_t *exchanger;
	dlistint_t *new_node;

	/*Dynamic Memory Allocation for new_node*/
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	/*Data loading to new_node*/
	new_node->n = n;
	new_node->next = NULL;

	current_tailer = *head;

	/*Traversing to the list tail and loading new_node*/
	if (current_tailer != NULL)
	{
		while (current_tailer->next != NULL)
			current_tailer = current_tailer->next;
		exchanger = current_tailer;
		current_tailer = new_node;
	}

	else
		/*Adding new_node as first node incase the list is empty*/
	{
		*head = new_node;
	}

	/*backlinking new_node with previous tailer*/
	new_node->prev = exchanger;

	return (new_node);
}
