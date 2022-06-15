#include "main.h"
#include <stdio.h>
/**
 * _abs - a function that returns the absolute value of an int
 *
 * Return: The function returns an absolute value of the int
*
*  @i: i is an integer
*/

int _abs(int i)
{
	if (i < 0)
	{
		return (i * -1);
	}
	else
	{
	return (i);
	}
}
