#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024
/**
 * err_exit_with_filename - error message
 * @code: name of file
 * @message: the letters
 * @fname: the letters
 */
void err_exit_with_filename(int code, const char *message, const char *fname)
{
	dprintf(STDERR_FILENO, message, fname);
	exit(code);
}
/**
 * err_exit_with_fd - error message
 * @code: name of file
 * @message: the letters
 * @fd: the letters
 */
void err_exit_with_fd(int code, const char *message, int fd)
{
	dprintf(STDERR_FILENO, message, fd);
	exit(code);
}
/**
 * main - copies a file
 * @argc: name of file
 * @argv: the letters
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;

	if (argc != 3)
		err_exit_with_filename(97, "Usage: cp file_from file_to\n", NULL);
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		err_exit_with_filename(98, "Error: Can't read from file %s\n", argv[1]);
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		err_exit_with_filename(99, "Error: Can't write to %s\n", argv[2]);
	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
			err_exit_with_filename(99, "Error: Can't write to %s\n", argv[2]);
	}
	if (bytes_read == -1)
		err_exit_with_filename(98, "Error: Can't read from file %s\n", argv[1]);

	if (close(fd_from) == -1)
		err_exit_with_fd(100, "Error: Can't close fd %d\n", fd_from);

	if (close(fd_to) == -1)
		err_exit_with_fd(100, "Error: Can't close fd %d\n", fd_to);

	return (0);
}
