#include "function_pointers.h"
/**
 * print_name - function that print name
 *
 * @f: variable that hold the string name
 * @name: name of that person
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
