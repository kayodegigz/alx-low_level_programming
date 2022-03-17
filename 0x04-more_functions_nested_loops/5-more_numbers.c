#include "main.h"

/**
 * more_numbers - function prints the numbers 0 to 14 ten times
 */

void more_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(' ');

		int j;

		for (j = 0; j < 15; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
