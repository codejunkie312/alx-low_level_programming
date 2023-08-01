#include "lists.h"

/**
 *  free_listint_safe - frees a listint_t linked list
 * @h: pointer to head of linked list
 * Return: number of nodes in list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *temp, *prev;

	if (!h || !*h)
		return (count);

	temp = *h;
	while (temp)
	{
		count++;
		if (temp->next >= temp)
		{
			free(temp);
			break;
		}
		prev = temp;
		temp = temp->next;
		free(prev);
	}
	*h = NULL;
	return (count);
}
