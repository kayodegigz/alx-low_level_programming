#include "main.h"

/**
 * factorial - func finds the factorial of a given number
 *
 * @n: integer to be computed
 *
 * Return: returns an int depending on the beaviour of the function
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
