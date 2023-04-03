#include "lists.h"

/**
 * free_listint  - free all allocated memory
 *
 * @head: pointer to node to free
 */

void free_listint(listint_t *head)
{
listint_t *ptr = head;
while (ptr != NULL)
{
free(ptr);
}
}
