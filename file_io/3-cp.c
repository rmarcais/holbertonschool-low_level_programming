#include "main.h"

/**
 * handle_close - Handles file descriptor closing
 * @fd: File descriptor to close
 */

void handle_close(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies content from one file to another
 * @ac: Argument count
 * @av: Argument vector
 * Return: 0 on success, various error codes on failure
 */

int main(int ac, char *av[])
{
	int fd_from, fd_to;
	ssize_t read_bytes, write_bytes;
	char buffer[1024];

	if (ac != 3)
	{dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	}
	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
	{dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fd_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((read_bytes = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		write_bytes = write(fd_to, buffer, read_bytes);
		if (fd_to == -1 || write_bytes != read_bytes)
		{
			handle_close(fd_from);
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}
	if (read_bytes == -1)
	{
		handle_close(fd_from);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	handle_close(fd_from);
	handle_close(fd_to);
	return (0);
}

