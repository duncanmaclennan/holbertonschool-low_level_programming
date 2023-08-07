#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * append_text_to_file - creates a file
 * @filename: name of file
 * @text_content: the letters
 * Return: 1 if success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t write_count;
	size_t length;

	length = 0;
	if (!filename)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		while (text_content[length])
		{
			length++;
		}
		write_count = write(fd, text_content, length);
		if (write_count == (-1))
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
