#include "lists.h"


/**
 * delete_nodeint_at_index - delete node at an index
 *
 * @head: pointer to node
 * @index: index to delete
 * Return: int
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr_current = *head;
	listint_t *ptr_previous = *head;

	if (*head == NULL)
	return (-1);
	if (index == 0)
	{
		*head = ptr_current->next;
		free(ptr_current);
		ptr_current = NULL;
		return (1);
	}
	while (index != 0)
	{
		ptr_previous = ptr_current;
		ptr_current = ptr_current->next;
		index--;
	}
	ptr_previous->next = ptr_current->next;
	free(ptr_current);
	ptr_current = NULL;
	return (ptr_previous->next ? 1 : -1);

}