#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t list
 * @head: pointer to head of list
 * @index: index of node to delete
 *
 * Return: 1 if success, -1 if failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i = 0;

	if (!head || !*head)
		return (-1);
	if (index == 0)
	{
		if (current->next)
			current->next->prev = NULL;
		*head = current->next;
		free(current);
		return (1);
	}
	while (current)
	{
		if (i == index)
		{
			if (current->next)
				current->next->prev = current->prev;
			current->prev->next = current->next;
			free(current);
			return (1);
		}
		current = current->next;
		i++;
	}
	return (-1);
}
