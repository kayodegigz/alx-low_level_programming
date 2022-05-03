#include "main.h"
/**
 *append_text_to_file - appends a given string to a file
 *
 * @filename: the file that the string will be appended to
 * @text_content: the string to be appended
 * Return: returns 1 if successful, -1 if not
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int i = 0, wrt;

	if (!filename)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
	{
		return (-1);
	}

	if (text_content)
	{
		while (text_content[i] != '\0')
		{
			i++;
		}

		wrt = write(fd, text_content, i);
		if (wrt < 0)
		{
			return (-1);
		}
	}
	close(fd);
	return (1);
}
