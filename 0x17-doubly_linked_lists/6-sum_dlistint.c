#include "lists.h"

/**
 * sum_dlistint - sum all data in a linkedlist
 *
 * @head: node head
 * Return: sum of all data int
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;
	int total = 0;

	if (!ptr)
	return (0);
	while (ptr)
	{
		total += ptr->n;
		ptr = ptr->next;
	}
	return (total);
}
