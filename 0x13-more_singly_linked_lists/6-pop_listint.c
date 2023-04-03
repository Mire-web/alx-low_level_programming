#include "lists.h"

/**
 * pop_listint - delete head node
 *
 * @head: pointer to pointer to head node
 * Return:int
 */

int pop_listint(listint_t **head)
{
	listint_t *ptr;

	listint_t *temp;

if (*head == NULL)
{
return (0);
}
ptr = *head;
	temp = *head;
	ptr = ptr->next;
	*head = ptr;
	free(temp);
	return (ptr->n);
}
