#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning
 * of a dlistint_t list
 *
 * @head: head of the list
 * @n: value of the element to fill in node
 *
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *current_header;

	/*Dynamic Memory Allocation for new node*/
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	/*data-filling the new node*/
	new_node->n = n;
	new_node->prev = NULL;
	current_header = *head;

	/*Rechecking the head points to the origin node of DL-list */
	if (current_header != NULL)
	{
		while (current_header->prev != NULL)
			current_header = current_header->prev;
	}

	/*making new_node the first node*/
	new_node->next = current_header;

	/*Adding the back-reference of new to the previous first node*/
	if (current_header != NULL)
		current_header->prev = new_node;

	/*updating the list head to point to 'new'*/
	*head = new_node;

	return (new_node);
}



