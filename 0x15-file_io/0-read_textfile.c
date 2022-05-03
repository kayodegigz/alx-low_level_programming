#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
    int fd;
    ssize_t bytes_read, bytes_written; /*bytes successfully written and read*/
    char *buf; /*buffer for temporarily storing the text*/

    if (filename == NULL)
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
        free (buf);
        return (0);
    }
    bytes_written = write(1, buf, bytes_read);

    return (bytes_read); /*or bytes written, anyone*/
    free(buf);
    close(fd);
}
