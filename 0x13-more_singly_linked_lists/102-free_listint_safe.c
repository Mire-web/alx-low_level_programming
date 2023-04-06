#include "lists.h"

/**
 * free_listint_safe - free all memory of a linked list including loops
 *
 * @h: pointer to node head
 * Return: size_t
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *ptr;
	size_t count = countNodes(*h);

	if (h == NULL || *h == NULL)
	return (0);

	for (; *h; count++)
	{
		if (*h - (*h)->next > 0)
		{
			ptr = (*h)->next;
			free(*h);
			*h = ptr;
		}
		else
		{
			count++;
			free(*h);
			*h = NULL;
			break;
		}
	}
	*h = NULL;
	return (count);
}
