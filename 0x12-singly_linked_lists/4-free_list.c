#include "lists.h"
#include <stdlib.h>

/**
 * free_list - free list_t
 *
 * @head: list_t is head
 */

void free_list(list_t *head)
{
	list_t *tmp = head;
	list_t *next;

	while (tmp != NULL)
	{
		next = tmp->next;
		free(tmp);
		tmp = next;
	}
	head = NULL;
}
