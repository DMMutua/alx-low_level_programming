#include "main.h"

/**
 * append_text_to_file - appends given text to a specified file
 * @filename: filename in question
 * @text_content: the content to append
 *
 * Return: 1 in success, -1 for failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op;
	int i = 0;

	if (filename == NULL)
		return (-1);

	op = open(filename, O_APPEND | O_WRONLY);

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
