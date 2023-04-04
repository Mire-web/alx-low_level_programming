#include "lists.h"

/**
 * insert_nodeint_at_index - insert a node at a specific index
 *
 * @head: pointer to head pointer
 * @idx: index where new node should be added
 * @n: new node data
 * Return: listint_t*
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr;
	listint_t *temp = malloc(sizeof(listint_t));
	unsigned int i = 0;

	ptr = *head;
	while (i < (idx - 1))
	{
		ptr = ptr->next;
		i++;
	}
	if (ptr != NULL)
	{
		temp->n = n;
		temp->next = ptr->next;
		ptr->next = temp;
		return (temp);
	}
	else
		return (NULL);
}
