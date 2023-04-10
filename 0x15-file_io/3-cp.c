#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * main - copying contents from one file to another
 * @argv: argument vector
 * @argc: argument count
 * Return: 0 on success, error on fail
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, rcount, wcount;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: File cannot be read from %s\n", argv[1]);
		exit(98);
	}

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cannot write to %s\n", argv[2]);
		exit(99);
	}

	do {
		rcount = read(fd_from, buf, 1024);
		if (rcount == -1)
		{
			dprintf(STDERR_FILENO, "Error: Cannot be read from file %s\n", argv[1]);
			exit(98);
		}

		wcount = write(fd_to, buf, rcount);
		if (wcount == -1)
		{
			dprintf(STDERR_FILENO, "Error: Cannot write to %s\n", argv[2]);
			exit(99);
		}
	} while (rcount > 0);

	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't exit fd %d\n", fd_from);
		exit(100);
	}

	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't exit fd %d\n", fd_to);
		exit(100);
	}

	return (0);
}
