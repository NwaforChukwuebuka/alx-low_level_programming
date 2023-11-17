#include "lists.h"
#include <string.h>
/**
 * add_node - adds a new node
 * @head: ptr to a ptr to the head
 * @str: string to duplicate into a new node
 * Return: pointer to list_t struct
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;

	node = malloc(sizeof(list_t));

	if (node == NULL)
	{
		free(node);
		return (NULL);
	}
	node->str = strdup(str);
	node->len = strlen(str);

	if (node->str == NULL)
	{
		return (NULL);
	}
	node->next = *head;
	*head = node;
	return (node);
}
