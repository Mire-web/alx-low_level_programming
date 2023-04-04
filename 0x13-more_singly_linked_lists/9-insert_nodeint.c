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
listint_t *temp = *head;
unsigned int i = 0;

ptr = malloc(sizeof(listint_t));
if (!ptr || !head)
return (NULL);

ptr->n = n;
ptr->next = NULL;

if (idx == 0)
{
ptr->next = *head;
*head = ptr;
return (ptr);
}

while (temp && i < idx)
{
if (i == idx - 1)
{
ptr->next = temp->next;
temp->next = ptr;
return (ptr);
}
else
temp = temp->next;
i++;
}

return (NULL);
}
