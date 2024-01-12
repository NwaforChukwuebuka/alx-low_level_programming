#include "lists.h"
/**
  * add_dnodeint - Adds a node to the beginning of a doubly linked list
  * @head: ptr to the head of the linked list
  * @n: data to be inserted to the list
  * Return: ptr to the element inserted
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *t;

	t = *head;
	t = malloc(sizeof(dlistint_t));
	if (t == NULL)
		return (NULL);
	t->n = n;
	t->prev = NULL;
	t->next = *head;
	*head = t;
	return (t);
}
