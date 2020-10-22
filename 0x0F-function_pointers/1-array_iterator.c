#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - execute a function given as a parameter
 *
 * @array: int is array
 *
 * @size: size_t is size
 *
 * @action: void is action
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action != NULL)
	{
	for (i = 0; i < size; i++)
		action(array[i]);
	}
}
