#insert "lists.h"

/**
  * insert_dnodeint_at_index - Inserts a new node at a given position
  * @h: The head of the doubly linked list
  * @idx: The index in which insert the new node
  * @n: The number to insert in the new node
  *
  * Return: The address of the new node, or NULL if it failed
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current_node = NULL, *new_node = NULL;
	unsigned int iterations = 0, length = 0;

	if (h == NULL)
		return (NULL);

	/*for adding at index zero in an empty list:*/
	if (*h == NULL && idx == 0)
		return (add_dnodeint(h, n));

	/*Adding at origin node when list is not empty;*/
	length = dlistint_len(*h);

	if (idx == 0)
		return (add_dnodeint(h, n));

	/*Adding at end of list*/
	else if (length == idx)
		return (add_dnodeint_end(h, n));

	/*Adding anywhere in between the list*/
	current_node = *h;

	while (current_node != NULL)
	{
		if (iterations == idx)
		{
			new_node = create_node(n, current_node, current_node->prev);
			current_node->prev = new_node;
			current_node = new_node;
			current_node->prev->next = new_node;
			return (new_node);
		}

		current_node = current_node->next;
		++iterations;
	}

	return (current_node);
}

/**
  * dlistint_len - Counts the number of elements in a doubly linked list
  * @h: The double linked list to count
  *
  * Return: Number of elements in the doubly linked list
  */
size_t dlistint_len(const dlistint_t *h)
{
	int element_count;

	element_count = 0;

	if (h == NULL)
		return (element_count);

	/*Confirm h points to the origin node in DL-list*/
	while (h->prev != NULL)
		h = h->prev;

	/*Traverse list while adding element_no*/
	while (h != NULL)
	{
		element_count++;
		h = h->next;
	}

	return (element_count);
}

/**
  * create_node - Create a new node with values
  * @n: The number of the new node
  * @next: The next node of the new node
  * @prev: The previous node of the new node
  *
  * Return: The address of the new node created
  */
dlistint_t *create_node(unsigned int n, void *next, void *prev)
{
	dlistint_t *new_node = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = next;
	new_node->prev = prev;
	return (new_node);
}
