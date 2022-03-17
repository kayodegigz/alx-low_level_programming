#include "main.h"

/**
 * _isupper- A function that checks the case of a letter
 *
 * Return: returns 1 if it's an uppercase letter, returns 0 otherwise
 *
 * @c: an alphabet
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else if (c >= 'a' && c <= 'z')
	{
		return (0);
	}
}
