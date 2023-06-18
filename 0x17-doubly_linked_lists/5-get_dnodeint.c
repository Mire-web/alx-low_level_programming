#include "lists.h"

/**
 * get_dnodeint_at_index - Get the dnodeint at index object
 *
 * @head: head node
 * @index: index to get
 * Return: node if found at index dlistint_t*
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *ptr = head;

	while (i <= index && ptr)
	{
		if (i == index)
		return (ptr);
		ptr = ptr->next;
		i++;
	}
	return (NULL);
}
