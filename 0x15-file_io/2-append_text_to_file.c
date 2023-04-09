#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>

/**
 * append_text_to_file - Appends text
 * @filename: file title
 * @text_content: contents of file
 * Return: 1 for success, -1 for fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, res, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		res = write(fd, text_content, len);
		if (res == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
