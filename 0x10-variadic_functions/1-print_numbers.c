#include<stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints all the ints given
 *
 * @separator: separates the numbers to be printed
 * @n: the number of ints to be printed out
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ap;

	va_start(ap, n);

		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(ap, int));
			if (separator && i < (n - 1))
			{
				printf("%s", separator);
			}
		}
	printf("\n");
	va_end(ap);
}
