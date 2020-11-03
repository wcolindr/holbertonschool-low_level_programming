#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees listint_t
 *
 * @head: listint_t is head
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp = *head;
	listint_t *next;

	while (tmp != NULL)
	{
		next = tmp->next;
		free(tmp);
		tmp = next;
	}
	*head = NULL;
}
