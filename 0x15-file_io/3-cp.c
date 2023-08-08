#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#define BUF_SIZE 1024

/**
 * print_error - prints error message to the POSIX standard error
 * @code: error code
 * @filename: name of the file
 * Return: nothing
 */
void print_error(int code, char *filename)
{
	switch (code)
	{
		case 97:
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			break;
		case 98:
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
			break;
		case 99:
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
			break;
		case 100:
			dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", filename);
			break;
		default:
			break;
	}
	exit(code);
}

/**
 * main - copies the content of a file to another file
 * @ac: number of arguments
 * @av: array of arguments
 * Return: 0 on success
 */
int main(int ac, char **av)
{
	int fd_from, fd_to, readed, written;
	char buf[BUF_SIZE];

	if (ac != 3)
		print_error(97, NULL);

	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
		print_error(98, av[1]);

	fd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		print_error(99, av[2]);

	while ((readed = read(fd_from, buf, BUF_SIZE)) > 0)
	{
		written = write(fd_to, buf, readed);
		if (written == -1 || written != readed)
			print_error(99, av[2]);
	}

	if (readed == -1)
		print_error(98, av[1]);

	if (close(fd_from) == -1)
		print_error(100, av[1]);

	if (close(fd_to) == -1)
		print_error(100, av[2]);

	return (0);
}
