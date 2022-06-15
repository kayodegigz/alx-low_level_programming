#include "main.h"
#include <stdio.h>
/**
 * _isupper- A function that checks the case of a letter
 *
 * Return: returns 1 if it's an uppercase letter, returns 0 otherwise
 *
 * @c: an alphabet
 */

int _isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}
