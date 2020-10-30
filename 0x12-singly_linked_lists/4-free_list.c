#include "lists.h"
#include <stdlib.h>

/**
 * free_list - free list_t
 *
 * @head: list_t is head
 */

void free_list(list_t *head)
{
	list_t *i;

	while (head != NULL)
	{
		i = head;
		head = head->next;
		free(i);
	}
}
