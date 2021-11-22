#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX stdout.
 * @filename: name of the file
 * @letters: number of letters it should read and print
 * Return: 0 or the actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, r, w;
	char *buf;

	if (filename == NULL)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	fd = open(filename, O_RDONLY, 0600);
	if (fd == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}
	r = read(fd, buf, letters);
	if (r == -1)
	{
		free(buf);
		close(fd);
		return(0);
	}
	w = write(1, buf, r);
	if (w == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}
	free(buf);
	close(fd);
	return (r);
}
