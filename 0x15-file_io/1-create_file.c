#include "main.h"
/**
 * create_file - creates a file
 * @filename: The name of the file
 * @text_content: content of the text
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w;
	char *buf;

	if (filename == NULL)
		return (-1);
	buf = text_content;
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (text_content)
	{
		w = write(fd, buf, _strlen(text_content));
		if (fd == -1 || w == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
/**
 * _strlen - computes the size of str
 * @str: points to a char
 * Return: count.
 */
int _strlen(char *str)
{
	int i = 0, count = 0;

	while (str[i])
	{
		count++;
		i++;
	}
	return (count);
}
