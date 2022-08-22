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

	if (filename == NULL)
		return (-1);

	op = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (op == -1)
		return (-1);

	if (text_content)
		write(op, text_content, _strlen(text_content));

	close(op);
	return (1);
}

/**
 * _strlen - Returns the length of a string
 * @s: String to Count
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
