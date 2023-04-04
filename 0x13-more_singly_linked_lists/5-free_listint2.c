#include "lists.h"


/**
 * free_listint2  - free all allocated memory
 *
 * @head: pointer to node to free
 */
void free_listint2(listint_t **head)
{
listint_t *ptr = *head;

listint_t *ptr_next;
if (!head)
return;
while (ptr != NULL)
{
ptr_next = ptr->next;
free(ptr);
ptr = ptr_next;
}
*head = NULL;
}
