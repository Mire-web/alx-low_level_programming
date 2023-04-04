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

int data;
if (!*head || !head)
{
return (0);
}
data = (*head)->n;
ptr = (*head)->next;
free(*head);
	*head = ptr;
	return (data);
}
