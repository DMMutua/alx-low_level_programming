#include "main.h"

/**
 * read_textfile - Reads a file and prints it to the POSIX stdout
 * @filename: the Source file to be read
 * @letters: Number of letters to read and print to POSIX stdout
 *
 * Return: Actual number of letters, 0 if otherwise
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t rd, wr, op;
	char *temp;

	if (filename == NULL)
		return (0);

	temp = malloc(sizeof(char) * letters);
	if (temp == NULL)
		return (0);

	op = open(filename, O_RDWR);

	if (op == -1)
	{
		free(temp);
		return (0);
	}

	rd = read(op, temp, letters);
	if (rd == -1)
	{
		free(temp);
		return (0);
	}

	wr = write(STDOUT_FILENO, temp, rd);
	if (wr == -1)
	{
		free(temp);
		return (0);
	}

	if (close(op) == -1)
		return (0);

	close(op);
	free(temp);
	return (wr);
}
