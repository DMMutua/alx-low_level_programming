#include "main.h"

/**
 * _isdigit - Checks for a digit (0 - 9)
 * @c: The Int to check whether is digit
 *
 * Returns: 1 if `c` is a digit, 0 otherwise.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
