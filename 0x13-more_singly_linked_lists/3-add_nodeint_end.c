#include "lists.h"
/**
 * add_nodeint_end - add node to end
 *
 * @head: pointer to pointer to head node
 * @n: new element integer
 * Return: pointer to head;
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *ptr;
listint_t *h = malloc(sizeof(listint_t));
ptr = *head;
if (!h)
return (NULL);
h->n = n;
h->next = NULL;
if (*head == NULL)
{
*head = h;
return (h);
}
while (ptr->next != NULL)
{
ptr = ptr->next;
}
ptr->next = h;
return (ptr->next);
}
