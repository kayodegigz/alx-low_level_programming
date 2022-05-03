#include "main.h"

/**
 * read_textfile - reads text of a given number of bytes from a file
 *
 * @filename: the file to be accessed
 * @letters: the maximum number of bytes to be allocated
 * Return: returns the number of bytes successfully written
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes_read, bytes_written; /*bytes successfully written and read*/
	char *buf; /*buffer for temporarily storing the text*/

	if (!filename)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);

	if (fd < 0)
	{
		return (0);
	}

	buf = malloc(sizeof(char) * letters);

	bytes_read = read(fd, buf, letters);
	if (bytes_read < 0)
	{
		free(buf);
		return (0);
	}
	buf[bytes_read] = '\0';
	close(fd);

	bytes_written = write(STDOUT_FILENO, buf, bytes_read);

	if (bytes_written < 0)
	{
		free(buf);
		return (0);
	}
	free(buf);
	return (bytes_written); /*or bytes_read, anyone*/
}
