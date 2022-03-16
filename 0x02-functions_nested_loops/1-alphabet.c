#include "main.h"
#include <stdio.h>


/**
*print_alphabet - prints alphabets from a to z
*/

void print_alphabet(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		_putchar (ch);

		ch++;
	}

	_putchar('\n');
}
