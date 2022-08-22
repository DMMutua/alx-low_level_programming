#include "main.h"

/**
 * create_file - creates a file and adds some content to it
 * @filename: the name of the file to be created
 * @text_content: The content to add to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int op;
	int i = 0;

	if (filename == NULL)
		return (-1);

	op = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (op == -1)
		return (-1);

	while (text_content[i])
	{
		i++;
	}

	if (text_content != NULL)
		write(op, text_content, i);

	if (close(op) == -1)
		return (-1);

	close(op);
	return (1);
}
