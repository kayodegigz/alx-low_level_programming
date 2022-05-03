#ifndef _FILEIO_
#define _FILEIO_

#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

ssize_t read_textfile(const char *filename, size_t letters);
int _putchar(char c);




#endif