#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - add node in the beginning
 *
 * @head: listint_t is head
 *
 * @n: int is n
 *
 * Return: address of new node or NULL if fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = (n);
	new_node->next = (*head);

	(*head) = new_node;

	return (new_node);
}
