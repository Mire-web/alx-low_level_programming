#include "lists.h"

/**
 * add_dnodeint_end - add a node to list end
 *
 * @head: node head pointer
 * @n: new node data
 * Return: pointer to new node dlistint_t*
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	dlistint_t *ptr = *head;

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	if (!ptr)
	{
		*head = new_node;
	}
	else
	{
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = new_node;
		new_node->prev = ptr;
	}
	return (new_node);
}
