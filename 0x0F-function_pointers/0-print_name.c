#include "function_pointers.h"

/**
 * print_name - print name
 *
 * @name: char is name
 *
 * @f: pointer is f
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
