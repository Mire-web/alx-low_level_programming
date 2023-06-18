#include "lists.h"

/**
 * insert_dnodeint_at_index - insert new node at index of linkedlist
 *
 * @h: node head
 * @idx: index to insert node
 * @n: new node data
 * Return: new node address dlistint_t* or NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = (dlistint_t *) malloc(sizeof(dlistint_t));
	dlistint_t *ptr = *h, *prev_ptr = *h;
	unsigned int i = 0;

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	while (i <= idx && ptr)
	{
		if (i == idx)
		{
			ptr->prev->next = new_node;
			new_node->prev = ptr->prev;
			new_node->next = ptr;
			ptr->prev = new_node;
			return (new_node);
		}
		prev_ptr = ptr;
		ptr = ptr->next;
		i++;
	}
	if (i == idx && prev_ptr)
	{
		printf("%d\n", prev_ptr->n);
		prev_ptr->next = new_node;
		new_node->prev = prev_ptr;
		return (new_node);
	}
	else
	return (NULL);
}
