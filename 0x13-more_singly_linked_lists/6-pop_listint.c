#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - delete a head node
 *
 * @head: listint_t is head
 *
 * Return: head node's data or 0 if empty
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return (0);

	tmp = *head;
	*head = (*head)->next;
	free(tmp);

	return ((*head)->n - 1);
}
