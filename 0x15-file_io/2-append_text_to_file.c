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

	if (filename == NULL)
		return (-1);

	op = open(filename, O_APPEND | O_WRONLY);

	if (op == -1)
		return (-1);

	if (text_content)
	{
		if (write(op, text_content, _strlen(text_content)) == -1)
			return (-1);
	}

	close(op);
	return (1);
}

/**
 * _strlen - Returns the length of a string
 * @s: String to count
 *
 * Return: String Length
 */
int _strlen(char *s)
{
	int c = 0;

	while (s[c])
		c++;

	return (c);
}
