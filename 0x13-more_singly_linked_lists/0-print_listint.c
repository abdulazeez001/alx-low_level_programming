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
	size_t _len = 0;
	const listint_t *curr = h;

	while (curr != NULL)
	{
		printf("%i\n", curr->n);
		curr = curr->next;
		_len++;
	}
	return (_len);
}
