#include "lists.h"

/**
 * add_nodeint - add node to beginning
 *
 * @head: pointer to pointer to head node
 * @n: new element integer
 * Return: pointer to head;
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *h = malloc(sizeof(listint_t));
if (!h)
return (NULL);
h->n = n;
h->next = *head;
*head = h;
	return (*head);
}
