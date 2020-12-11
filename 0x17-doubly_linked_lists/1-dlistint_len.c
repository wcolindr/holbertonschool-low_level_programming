#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * dlistint_len - print the number of elements of the list
 *
 * @h: head of node
 *
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
