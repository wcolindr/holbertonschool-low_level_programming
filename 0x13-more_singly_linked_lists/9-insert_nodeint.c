#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - add a node in a specific position
 *
 * @head: listint_t is head
 *
 * @idx: unsigned int is idx
 *
 * @n: int is n
 *
 * Return: address of new node or NULL if fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *tmp = *head;

	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	for (i = 1; i <= idx - 1; i++)
	{
		tmp = tmp->next;
	}
	new_node->next = tmp->next;
	tmp->next = new_node;

	return (new_node);
}
