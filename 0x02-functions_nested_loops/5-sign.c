#include "main.h"
#include <stdio.h>

/**
 * print_sign - prints the sign of a given number whether positive or negative
 *
 * @n: a number that is passed as an argument
 *
 * Return: returns a value of 1 if positive, returns 0 if negative
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else
	{
		_putchar(45);
		return (0);
	}
}
