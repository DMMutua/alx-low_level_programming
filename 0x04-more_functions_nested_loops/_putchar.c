#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes a character parameter to STDOUT
 * @c: the character to print
 *
 * Return: On Success 1.
 * on error, -1 is returned, and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
