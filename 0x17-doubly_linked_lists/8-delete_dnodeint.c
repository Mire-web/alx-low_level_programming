#include "lists.h"

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr = *head;
	unsigned int i = 0;

	while (i < index && ptr)
	{
		ptr = ptr->next;
		i++;
	}
	if (i == index && ptr)
	{
		if (ptr == *head)
		{
			if (ptr->next)
			ptr->next->prev = NULL;
			*head = ptr->next;
			ptr = NULL;
			free(ptr);
		}
		else
		{
			ptr->prev->next = ptr->next;
			ptr->next->prev = ptr->prev;
			ptr = NULL;
			free(ptr);
		}
		return (1);
	}
	else
	return (-1);
}
