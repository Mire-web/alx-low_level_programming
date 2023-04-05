#include "lists.h"


/**
 * reverse_listint - reverse a single linked list
 *
 * @head: pointer to node head
 * Return: listint_t*
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_ptr = NULL;
	listint_t *next_ptr = NULL;

	if (*head == NULL)
	{
		return (*head);
	}
	while (*head != NULL)
	{
		next_ptr = (*head)->next;
		(*head)->next = prev_ptr;
		prev_ptr = *head;
		*head = next_ptr;
	}
	*head = prev_ptr;
	return (*head);
}
