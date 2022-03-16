#include "main.h"
#include <stdio.h>


/**
*print_alphabet - prints alphabets from a to z
*/

void print_alphabet_x10(void)
{
	int a;

	a = 0;

	while (a < 10)
	{
		char ch;

		ch = 'a';

		while (ch <= 'z')
		{
			_putchar (ch);

			_putchar ('\n');
			ch++;
		}
		a++;
	}
}

