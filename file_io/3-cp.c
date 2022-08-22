#include "main.h"

/**
 * main - Copies the content of a file to another file.
 *
 * @argc: Argument Counter.
 *
 * @argv: Argument Vector.
 *
 * Return: 0 if success, exit if fails.
 */

int main(int argc, char *argv[])
{
	int fd_from = 0, fd_to = 0, read_size = 0, from_close = 0, to_close = 0;
	char buf[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((read_size = read(fd_from, buf, 1024)) > 0)
	{
		if (fd_to < 0 || write(fd_to, buf, read_size) != read_size)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fd_from);
			exit(99);
		}
	}
	if (read_size < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	from_close = close(fd_from);
	to_close = close(fd_to);
	if (from_close < 0 || to_close < 0)
	{
		if (from_close < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		if (to_close < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	return (0);
}
