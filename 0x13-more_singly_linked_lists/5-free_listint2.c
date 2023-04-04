#include "lists.h"


/**
 * free_listint2  - free all allocated memory
 *
 * @head: pointer to node to free
 */
void free_listint2(listint_t **head)
{
listint_t *ptr_next;

if (head == NULL)
return;
while (*head != NULL)
{
ptr_next = (*head)->next;
free(*head);
*head = ptr_next;
}
*head = NULL;
}
