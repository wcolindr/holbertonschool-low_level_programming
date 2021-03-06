#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - print name
 *
 * @name: char is name
 *
 * @f: pointer is f
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	f(name);
}
