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
	size_t _len;

	for (_len = 0; h != NULL; _len++)
	{
		h = h->next;
	}
	return (_len);
}
