#include "lists.h"
#include <stdlib.h>

/**
 * free_list - free list_t
 *
 * @head: list_t is head
 */

void free_list(list_t *head)
{
	while (head != NULL)
	{
		list_t *tmp = head;
		head = head->next;
		free(tmp);
	}
}
