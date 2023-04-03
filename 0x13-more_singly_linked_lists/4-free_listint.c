#include "lists.h"

/**
 * free_listint  - free all allocated memory
 *
 * @head: pointer to node to free
 */

void free_listint(listint_t *head)
{
listint_t *ptr = head;
listint_t *ptr_next;
while (ptr != NULL)
{
ptr_next = ptr->next;
free(ptr);
ptr = ptr_next;
}
}
