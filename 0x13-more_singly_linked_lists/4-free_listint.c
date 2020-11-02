#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees listint_t
 *
 * @head: listint_t is head
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
