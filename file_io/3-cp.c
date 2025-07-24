#include "main.h"

/**
 * print_error - Prints error and exits
 * @exit_code: exit status
 * @msg: message to print
 * @arg: related filename or descriptor
 */
void print_error(int exit_code, const char *msg, const char *arg)
{
	dprintf(STDERR_FILENO, "%s %s\n", msg, arg);
	exit(exit_code);
}

/**
 * main - Copies file content from one file to another
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, exits 97‑100 on error
 */
int main(int argc, char *argv[])
{
	int from_fd, to_fd, rd, wr;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	from_fd = open(argv[1], O_RDONLY);
	if (from_fd == -1)
		print_error(98, "Error: Can't read from file", argv[1]);

	to_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (to_fd == -1)
		print_error(99, "Error: Can't write to", argv[2]);

	while (1)
	{
		rd = read(from_fd, buf, 1024);
		if (rd == -1)
			print_error(98, "Error: Can't read from file", argv[1]);
		if (rd == 0)
			break;

		wr = write(to_fd, buf, rd);
		if (wr == -1 || wr != rd)
			print_error(99, "Error: Can't write to", argv[2]);
	}

	if (close(from_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from_fd);
		exit(100);
	}
	if (close(to_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to_fd);
		exit(100);
	}

	return (0);
}
