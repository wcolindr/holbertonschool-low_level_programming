#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * list_len - print the number of elements
 *
 * @h: struct of h
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
