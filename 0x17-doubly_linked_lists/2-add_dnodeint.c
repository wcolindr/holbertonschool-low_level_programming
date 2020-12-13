#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_dnodeint - function that add nodes at the beginning of a lists
 *
 * @head: head of node
 *
 * @n: new node
 *
 * Return: address of new node or NULL if it fails
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = (n);

	new_node->next = (*head);
	new_node->prev = NULL;

	if ((*head) != NULL)
		(*head)->prev = new_node;

	(*head) = new_node;

	return (new_node);
}
