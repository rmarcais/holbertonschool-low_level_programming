#include "main.h"
/**
 * main - copies the content of a file to another file
 * @argc: The number of arguments
 * @argv: array of arguments
 * Return: On success 0.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	_copyfile(argv[1], argv[2]);
	return (0);
}
/**
 * _copyfile - copies the content of a file to anothor file
 * @src: file from
 * @dest: file to
 * Return: Nothing.
 */
void _copyfile(char *src, char *dest)
{
	int r, fd1, fd2;
	char buf[1024];

	if (buf == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
		exit(99);
	}
	fd1 = open(src, O_RDONLY);
	if (src == NULL || fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}
	fd2 = open(dest, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((r = read(fd1, buf, 1024)) > 0)
	{
		if (fd2 == -1 || write(fd2, buf, r) != r)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
				dest);
			exit(99);
		}
	}
	if (r == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", src);
		exit(98);
	}
	if (close(fd1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	if (close(fd2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
}
