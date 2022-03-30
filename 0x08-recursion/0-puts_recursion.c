#include "main.h"
/**
 * _puts_recursion - puth the character values on the screen
 *
 * @s: The string to be outputted
 *
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
