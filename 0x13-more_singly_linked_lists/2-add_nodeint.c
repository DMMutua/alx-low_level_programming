#include "lists.h"

/**
 * add_nodeint - adds a new node at the beggining of a listint_t
 * list
 * @head: the head of the list in question
 * @n: the integer to add to the newly created node
 *
 * Return: The address of the new node in the list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_list;

	if (head != NULL)
	{
		new_list = malloc(sizeof(listint_t));
		if (new_list == NULL)
			return (NULL);

		new_list->n = n;
		new_list->next = *head;
		*head = new_list;

		return (new_list);
	}

	return (NULL);
}
