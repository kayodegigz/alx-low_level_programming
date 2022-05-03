#include "main.h"

/**
 * create_file - creates a file using a file descriptor
 *
 * @filename: the name of the file to be created
 * @text_content: the contents of the file
 * Return: returns 1 if successful
 */

int create_file(const char *filename, char *text_content)
{
	int fp, wrt;
	int i = 0;

	if (!filename)
	{
		return (-1);
	}

	fp = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fp < 0)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		text_content = "";
	}
	while (text_content[i] != '\0')
	{
		i++;
	}

	wrt = write(fp, text_content, i);
	if (wrt < 0)
	{
		return (-1);
	}
	close(fp);
	return (1);
}
