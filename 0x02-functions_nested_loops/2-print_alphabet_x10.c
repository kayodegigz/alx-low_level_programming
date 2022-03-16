#include "main.h"
#include <stdio.h>


/**
*print_alphabet_x10 - prints alphabets from a to z 10 times
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
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		a++;
	}
}

