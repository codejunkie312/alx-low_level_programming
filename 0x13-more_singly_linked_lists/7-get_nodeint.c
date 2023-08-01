#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to the first node of the list
 * @index: index of the node to return
 * Return: pointer to the indexed node or NULL if it doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node_index;

	if (head == NULL)
		return (NULL);

	for (node_index = 0; node_index < index; node_index++)
	{
	if (head->next == NULL)
		return (NULL);
	head = head->next;
	}

	return (head);
}
