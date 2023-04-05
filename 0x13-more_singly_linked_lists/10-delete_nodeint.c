#include "lists.h"


/**
 * delete_nodeint_at_index - delete node at an index
 *
 * @head: pointer to node
 * @index: index to delete
 * Return: int
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *ptr_current = *head;
listint_t *ptr_previous = *head;
unsigned int i = 0;

if (*head == NULL)
return (-1);
if (index == 0)
{
*head = (*head)->next;
free(ptr_current);
return (1);
}
while (i < index - 1)
{
if (!ptr_current || !(ptr_current->next))
return (-1);
ptr_current = ptr_current->next;
i++;
}
ptr_previous = ptr_current->next;
ptr_current->next = ptr_previous->next;
free(ptr_previous);
return (1);
}
