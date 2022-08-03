#include "3-calc.h"

/**
 * main - program to perform simple calculator ops
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int x;
	int y;


	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (get_op_func(argv[2]) == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}


	x = atoi(argv[1]);
	y = atoi(argv[3]);

	printf("%d\n", get_op_func(argv[2])(x, y));
	return (0);
}
