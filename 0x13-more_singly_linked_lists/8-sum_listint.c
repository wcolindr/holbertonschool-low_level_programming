#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - sum all head node data
 *
 * @head: listint_t is head
 *
 * Return: sum of head node's data or 0 if is empty
 */

int sum_listint(listint_t *head)
{
	if (head == NULL)
		return (0);

	return (head->n + sum_listint(head->next));
}
