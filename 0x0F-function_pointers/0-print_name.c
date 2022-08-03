#include "funcpointers.h"

/**
 * print_name - prints name under different scenarios
 * @name: the name to be printed
 * @f: the pointer to function containing scenario by which
 * the name wil be printed according to
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
