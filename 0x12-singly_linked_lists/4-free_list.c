#include "lists.h"

/**
 * free_list - frees the list
 * @head: a pointer to the linked list
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *p;

	if (head == NULL)
		return; 
    
	p = head;

	free_list(p->next);
	free(p->str);
	free(p);
}
