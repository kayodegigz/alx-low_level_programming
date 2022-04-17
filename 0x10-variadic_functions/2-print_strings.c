#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings separated by a given char
 *
 * @separator: the character that will separate
 *
 * @n: number of arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
    unsigned int i = 0;
    
    va_list ap;

    va_start(ap, n);
    if (va_arg(ap, int))
    {
        for (i = 0; i < n; i++)
        {
            printf("%s",va_arg(ap, int));
        }
    }
    else
    {
        printf("nil");
    }

    if (separator && i < (n - 1))
    {
        printf("%s", separator);
    }
    printf("\n");

    va_end(ap);
}
