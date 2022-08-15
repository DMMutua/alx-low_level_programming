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

### 7-get_nodeint.c
a function that returns the nth node of a listint_t linked list.

### 8-sum_listint.c
a function that returns the sum of all the data (n) of a listint_t linked list.

### 9-insert_nodeint.c
a function that inserts a new node at a given position.

### 10-delete_nodeint.c
 a function that deletes the node at index index of a listint_t linked list.

### 100-reverse_listint.c
 a function that reverses a listint_t linked list. Returns: a pointer to the first node of the reversed list. Only One loop was used without ``malloc`` and ``free`` or arrays. only a maximum of two variables was used in the function.

### 101-print_listint_safe.c
a function that prints a listint_t linked list. Returns: the number of nodes in the list.This function can print lists with a loop that goes through the list only once. 

### 102-free_listint_safe.c
a function that frees a listint_t list. This function can free lists with a loop which goes through the list only once.Returns: the size of the list that was free’d. The function sets the head to NULL.

### 103-find_loop.c
a function that finds the loop in a linked list. Returns: The address of the node where the loop starts, or NULL if there is no loop. No ``malloc`` and ``free`` was used. only a max of two variables were used in the function.

[^1]: Written for the Completion of An ALX Software Engineering Course Task.
