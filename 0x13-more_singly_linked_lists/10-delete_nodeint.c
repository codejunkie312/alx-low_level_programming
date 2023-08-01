#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a linked list
 * @head: pointer to the first node of the list
 * @index: index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head, *next_node;
	unsigned int i;

	if (!*head)
		return (-1);

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	for (i = 0; i < index - 1; i++)
	{
		if (!temp)
			return (-1);
		temp = temp->next;
	}

	if (temp != NULL)
	{
		next_node = temp->next;
		temp->next = next_node->next;
		free(next_node);
		return (1);
	}

	return (-1);
}
