#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * sum_dlistint - sum of all data (n) of a list
 *
 * @head: head of node
 *
 * Return: the sum of all data
 */

int sum_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return (0);

	return (head->n + sum_dlistint(head->next));
}
