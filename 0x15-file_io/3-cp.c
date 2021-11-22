#include "main.h"
/**
 * main - copies the content of a file to another file
 * @argc: The number of arguments
 * @argv: array of arguments
 * Return: On success 0.
 */
int main(int argc, char *argv[])
{
	int r, w, fd1, fd2;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buf = create_a_buffer(argv[2]);
	fd1 = open(argv[1], O_RDONLY);
	r = read(fd1, buf, 1024);
	if (fd1 == -1 || r == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", argv[1]);
		free(buf);
		exit(98);
	}
	fd2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while (r > 0)
	{
		if (fd1 == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}
		w = write(fd2, buf, r);
		if (fd2 == -1 || w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
				argv[2]);
			free(buf);
			exit(99);
		}
		r = read(fd1, buf, 1024);
		fd2 = open(argv[2], O_WRONLY | O_APPEND);
	}
	free(buf);
	_close(fd1);
	_close(fd2);
	return (0);
}
/**
 * create_a_buffer - creates a buffer
 * @filename: name of the file
 *
 * Return: exit (99) or the buffer.
 */
char *create_a_buffer(char *filename)
{
	char *buf = malloc(sizeof(char) * 1024);

	if (buf == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	return (buf);
}
/**
 * _close - closes a file descriptor
 * @fd: The file descriptor
 *
 * Return: Nothing.
 */
void _close(int fd)
{
	int cl = close(fd);

	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
