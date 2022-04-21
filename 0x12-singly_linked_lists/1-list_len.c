#include "lists.h"
#include <stdio.h>

/**
 * list_len - returns linked list length.
 * @h: linked list head.
 * Return: lenght of the linked list.
 */

size_t list_len(const list_t *h)
{
	size_t _len;

	for (_len = 0; h != NULL; _len++)
		;
	return (_len);
}

