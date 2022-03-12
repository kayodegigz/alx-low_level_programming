#include <stdio.h>

/**
 *main - prints alphabets from lowercase z to a
 *
 *Return: returns 0 once it's successful
*/

int main(void)
{
	int ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
