#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - print doubly linked list nodes
 *
 * @h: head node
 * Return: size_t
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;

	if (!h)
	return (0);
	while (h)
	{
		printf("%d\n", h->n);
		n += 1;
		h = h->next;
	}
	return (n);
}
