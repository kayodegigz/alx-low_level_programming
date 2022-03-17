#include "main.h"
/**
 *_isdigit - checks if it's a number
 *
 *@c: the digit being checked
 *
 *Return: returns 1 if it's a digit
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
