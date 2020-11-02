#include "lists.h"
#include <stdio.h>

/**
 * listint_len - list number of elements
 *
 * @h: listint_t is h
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	int count;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
