#include <stdio.h>
#include "main.h"

/**
 * _islower - checks if the value entered is a lowercase letter
 *
 *@c: c is a letter that is tested for whether uppercase or lowercase
 *
 * Return: Returns 1 when it's a lowercase letter, returns 0 otherwise.
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
