#include "lists.c"

/**
 * free_list - Frees linked lists.
 * @head: The pointer to the first node of linked list
 *
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}

	free(head);
}
