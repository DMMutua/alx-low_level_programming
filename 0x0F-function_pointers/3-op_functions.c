#include "3-calc.h"

/**
 * op_add - returns the sum of two integers
 * @a: first int
 * @b: second int
 *
 * Return: Sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference of two integers
 * @a: the number to be subtracted from
 * @b: the number to be subtracted
 *
 * Return: The difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product of two integers
 * @a: the first int
 * @b: the second int
 *
 * Return: The product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two integers
 * @a: the int to divide
 * @b: the int to divide with
 *
 * Return: Int result of division
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - gives modulus of a and b
 * @a: the number to divide
 * @b: the number to divide with
 *
 * Return: Int remainder of the division
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

