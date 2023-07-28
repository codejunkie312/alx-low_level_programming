#include "lists.h"

/**
 * list_len - Returns the number of nodes in single linked list
 * @h: Pointer to the start of the list
 * Return: The number of elements in h.
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
