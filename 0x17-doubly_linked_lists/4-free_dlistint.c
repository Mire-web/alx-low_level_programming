#include "lists.h"

/**
 * free_dlistint - free a doublylinkedlist
 *
 * @head: head node
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;

	while (head)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
	free(head);
}
