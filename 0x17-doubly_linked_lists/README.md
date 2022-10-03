# Doubly Linked Lists in C

## Learning Objectives
1. Learning on Doubly Linked Lists
2. How to Use Doubly Linked Lists
3. Traversing Doubly Linked Lists
4. Operating on Contents of Doubly Linked Lists

## Doubly Linked List Structure
```
**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 *
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
```
## Tasks

### 0.Print List
A function that prints all the elements of a `dlistint_t` list.
### 1.List Length
A function that returns the number of elements in a linked `dlistint_t` list.
### 2. Add node
A function that adds a new node at the beginning of a `dlistint_t` list.
### 3. Add node at the end
A function that adds a new node at the end of a `dlistint_t` list.
### 4. Free list
A function that frees a `dlistint_t` list.
### 5. Get node at index
A function that returns the nth node of a `dlistint_t` linked list.
### 6. Sum list
A function that returns the sum of all the data (n) of a `dlistint_t` linked list.
### 7. Insert at index
A function that inserts a new node at a given position.
### 8. Delete at index
A function that deletes the node at index index of a `dlistint_t` linked list.
