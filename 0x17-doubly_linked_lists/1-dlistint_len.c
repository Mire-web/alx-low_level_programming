#include "lists.h"

/**
 * dlistint_len - check length of a linked list
 *
 * @h: head node
 * Return: no of nodes in list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	if (!h)
	return (0);
	while (h)
	{
		h = h->next;
		n++;
	}
	return (n);
}
