#include "lists.h"


/**
 * countNodes - count the number of nodes in a linked list
 *
 * @head: pointer to head
 * Return: int
 */

int countNodes(const listint_t *head)
{
	int nodeCount = 1;
	const listint_t *slow_ptr;
	const listint_t *fast_ptr;

	if (!head || !head->next)
	return (0);

	slow_ptr = head->next;
	fast_ptr = head->next->next;
	while (fast_ptr)
	{
		slow_ptr = slow_ptr->next;
		fast_ptr = fast_ptr->next->next;
		if (slow_ptr == fast_ptr)
		{
			slow_ptr = head;
			while (slow_ptr != fast_ptr)
			{
				nodeCount++;
				slow_ptr = slow_ptr->next;
				fast_ptr = fast_ptr->next;
			}
			slow_ptr = slow_ptr->next;
			while (slow_ptr != fast_ptr)
			{
				nodeCount++;
				slow_ptr = slow_ptr->next;
			}
			return (nodeCount);
		}
	}
	return (0);
}

/**
 * print_listint_safe - print a listint_t linked list
 *
 * @head: pointer to node to print
 * Return: size_t
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count = countNodes(head), i = 0;

	if (count == 0)
	{
		while (head)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		while (i < count)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			i++;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (count);
}
