#include "lists.h"
#include <string.h>
/**
 * add_node_end - adds a new node
 * @head: ptr to a ptr to the head
 * @str: string to duplicate into a new node
 * Return: pointer to list_t struct
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node;
	list_t *p;

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

	if (*head == NULL)
	{
		*head = node;
		return (*head);
	}
	p = *head;
	while (p->next != NULL)
	{
		p = p->next;
	}
	p->next = node;
	return (*head);
}
