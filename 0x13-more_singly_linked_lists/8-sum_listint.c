#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: pointer to the first node of the list
 * Return: sum of all the data (n) of the list or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int sum;

	if (head == NULL)
		return (0);

	for (sum = 0; head != NULL; head = head->next)
		sum += head->n;

	return (sum);
}
