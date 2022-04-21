#include "lists.h"
#include <string.h>

/**
 * add_node_end - Adds a new node at the end
 *                of a list_t list.
 * @head: A pointer the head of the list_t list.
 * @str: The string to be added to the list_t list.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *dup;
	int _len;
	list_t *node, *last;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	dup = strdup(str);
	if (str == NULL)
	{
		free(node);
		return (NULL);
	}

	for (_len = 0; str[_len];)
		_len++;

	node->str = dup;
	node->len = _len;
	node->next = NULL;

	if (*head == NULL)
		*head = node;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = node;
	}

	return (*head);
}
