#include "lists.h"

/**
 * add_dnodeint - add node at beginning
 *
 * @head: head node
 * @n: new node data
 * Return: pointer to new node dlistint_t*
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (!new_node)
	return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
