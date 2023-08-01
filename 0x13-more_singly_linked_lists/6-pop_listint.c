#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: double pointer to the first node of the list
 * Return: the head node's data (n) or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp_node;
	int temp_n;

	if (head == NULL || *head == NULL)
		return (0);

	temp_node = *head;
	temp_n = temp_node->n;
	*head = (*head)->next;
	free(temp_node);

	return (temp_n);
}
