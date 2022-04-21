#include "lists.h"
#include <string.h>

/**
 * add_node - Adds a new node at the beginning
 *            of a list_t list.
 * @head: A pointer to the head of the list_t list.
 * @str: The string to be added to the list_t list.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	char *_str;
	int _len;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	_str = strdup(str);
	if (_str == NULL)
	{
		free(node);
		return (NULL);
	}

	for (_len = 0; str[_len];)
		_len++;

	node->str = _str;
	node->len = _len;
	node->next = *head;

	*head = node;

	return (node);
}
