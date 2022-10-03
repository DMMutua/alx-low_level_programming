#include "lists.h"

/**
 * get_dnodeint_at_index - Gets a node from a doubly linked list
  * @head: The head of the doubly linked list
  * @index: The index to find in the doubly linked list
  *
  * Return: The specific node of the doubly linked list
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *specific_node = head;
	unsigned int iterations = 0;

	if (head != NULL)
		/*Iterate and search for specific index*/
	{
		while (current != NULL)
		{
			if (iterations == index)
				return (specific_node);

			specific_node = specific_node->next;
			/*Increments 'iterations' before processing above statement*/
			++iterations;
		}
	}

	return (NULL);
}
