#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dlistint - free a list
 *
 * @head: head of node
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
