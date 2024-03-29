#include "lists.h"

/**
 * sum_listint - Sum Int of a linkedlist
 *
 * @head: pointer to head
 * Return: int
 */

int sum_listint(listint_t *head)
{
	listint_t *ptr;
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	ptr = head;
	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
