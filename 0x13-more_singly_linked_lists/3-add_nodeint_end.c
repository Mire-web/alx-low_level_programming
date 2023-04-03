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
listint_t *ptr = malloc(sizeof(listint_t));
listint_t *h = malloc(sizeof(listint_t));
if (!h || !ptr)
return (NULL);
ptr = *head;
while (ptr->next != NULL)
ptr = ptr->next;
h->n = n;
h->next = NULL;
ptr->next = h;
return (h);
}
