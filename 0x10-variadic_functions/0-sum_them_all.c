#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - func that adds all the integers given after the n
 *
 * @n: num of integers to be added
 *
 * Return: returns an int
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int sum = 0;

	va_list ap;

	va_start(ap, n);

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			sum += va_arg(ap, int);
		}
		return (sum);
	}
	return (0);
	va_end(ap);

}
