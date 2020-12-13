#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - insert a new node at given position
 *
 * @h: head of node
 *
 * @idx: index of list where new node will be added
 *
 * @n: new node
 *
 * Return: address of new node or NULL if it fails
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *tmp = *h;

	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	for (i = 1; i <= idx - 1; i++)
	{
		tmp = tmp->next;
		tmp = tmp->prev;
	}
	new_node->next = tmp->next;
	tmp->next = new_node;
	tmp->prev = new_node;

	return (new_node);
}
