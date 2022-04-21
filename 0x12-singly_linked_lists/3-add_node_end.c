#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
 * add_node_end - add a node at the end of a linked list
 * @head: The character to print
 * @str: string for the new node
 *
 * Return: new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *curr_node;
	list_t *node;
	int _len;

	curr_node = *head;
	while (curr_node && curr_node->next != NULL)
		curr_node = curr_node->next;

	for (_len = 0; str[_len] != '\0'; _len++)
		;

	node = malloc(sizeof(list_t));
	if (node == NULL)
	{
		free(node);
		return (NULL);
	}
	node->str = strdup(str);
	if (node->str == NULL)
	{
		free(node);
		return (NULL);
	}
	node->len = _len;
	node->next = NULL;

	if (curr_node)
		curr_node->next = node;
	else
		*head = node;
	return (node);
}
