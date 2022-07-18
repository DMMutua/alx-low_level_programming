#include "main.h"

/**
 * set_string - setting the value of a pointer to a char
 * @s: source string
 * @t: target address
 *
 * Return: Void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
