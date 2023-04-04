#include "lists.h"

/**
 * get_nodeint_at_index - Get the nodeint at index object
 *
 * @head: pointer to head node;
 * @index: index to get nodeint from
 * Return: listint_t*
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int i;

	if (head == NULL)
	return (NULL);
	ptr = head;
	i = 0;
	while (i < index)
	{
		ptr = ptr->next;
		i++;
	}
	if (i == index && ptr != NULL)
	return (ptr);
	else
{
return (NULL);
}
}
