#include "lists.h"
#include <stdio.h>

/**
 * print_listint - print all elements
 *
 * @h: listint_t for h
 *
 * Return: total of elements
 */

size_t print_listint(const listint_t *h)
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
