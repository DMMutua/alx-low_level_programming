# More Singly-Linked Lists Scripts 

#### Contains C-scripts that demonstrate the concepts of Singly-Linked Lists in the C language[^1].

## ``listint_t`` Structure
`` typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t; ``

## Scripts and Functions

### 0-print_listint.c
a function that prints all the elements of a listint_t list.

### 1-listint_len.c
 a function that returns the number of elements in a linked listint_t list.

### 2-add_nodeint.c
a function that adds a new node at the beginning of a listint_t list.

### 3-add_nodeint_end.c
a function that adds a new node at the end of a listint_t list.

### 4-free_listint.c
a function that frees a listint_t list.

### 5-free_listint2.c
 a function that frees a listint_t list, setting the ``head``to ``NULL``.

### 6-pop_listint.c
 a function that deletes the head node of a listint_t linked list, and returns the head node’s data (n).

[^1]: Written for the Completion of An ALX Software Engineering Course Task.
