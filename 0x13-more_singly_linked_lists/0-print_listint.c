#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements in a listint_t list.
 * @h: linked list head
 *
 * Return: the number of nodes in the list.
 */

size_t print_listint(const listint_t *h)
{
	size_t node_size = 0;

	while (h)
	{
		printf("%d\n", h->n);
		node_size += 1;
		h = h->next;
	}

	return (node_size);
}
