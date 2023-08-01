# Prototypes of functions:
# `size_t print_listint(const listint_t *h);`
* a function that prints all the elements of a listint_t list.
# `size_t listint_len(const listint_t *h);`
* returns the number of elements in a linked `listint_t` list.
# `listint_t *add_nodeint(listint_t **head, const int n);`
* adds a new node at the beginning of a `listint_t` list.
# `listint_t *add_nodeint_end(listint_t **head, const int n);`
* adds a new node at the end of a `listint_t` list.
# `void free_listint(listint_t *head);`
* frees a `listint_t` list.
# `void free_listint2(listint_t **head);`
* frees a `listint_t` list.
# `int pop_listint(listint_t **head);`
* deletes the head node of a `listint_t` linked list, and returns the head node’s data (n).