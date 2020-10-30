#include "lists.h"
#include <stdlib.h>

/**
 * free_list - free list_t
 *
 * @head: list_t is head
 */

void free_list(list_t *head)
{
	list_t *tmp, *store;

	tmp = head;

	while (tmp != NULL)
	{
		store = tmp->next;
		free(tmp);
		tmp = store;
	}
}
