#include <stdio.h>

/**
 * main - Prints number of arguments passed to it
 * @argc: The number of arguments supplied to program
 * @argv: an array of pointers to the arguments
 *
 * Return: Always 0
 */
int main(int argc, char __attribute__((__unused__)) *argv[]){
	printf("%d\n", argc - 1);

	return (0);
}
