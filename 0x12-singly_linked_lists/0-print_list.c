#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_list - print all elements of a list
 *
 * @h: list of list_t
 *
 * Return: number of elements
 */

size_t print_list(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
