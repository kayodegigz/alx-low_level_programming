#include "main.h"
#include <stdio.h>

/**
 * _isalpha - checks whether a character is a letter or not
 *
 * Return: Returns 1 if it's an alphabet, returns 0 otherwise
 *
 * @c: ASCII value of the letter
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
