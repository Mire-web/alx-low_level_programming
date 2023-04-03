#include "lists.h"

/**
 * pop_listint - delete head node
 *
 * @head: pointer to pointer to head node
 * Return:int
 */

int pop_listint(listint_t **head)
{
	if (*head == NULL)
	return (0);
	listint_t *ptr = *head;

	listint_t *temp = *head;

	ptr = ptr->next;
	*head = ptr;
	free(temp);
	return (ptr->n);
}