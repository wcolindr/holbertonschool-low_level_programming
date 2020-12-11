#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dlistint - print all elements of the list
 *
 * @h: head node
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
