#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - This function prints the last digit of an int
 *
 * @i: This is the int passed as an argument
 *
 * Return: returns the last value of the int
*/

int print_last_digit(int i)
{
	int last_digit = n % 10;

	if (last_digit < 0)
		last_digit *= -1;

	_putchar(last_digit + '0');

	return (last_digit);
}
