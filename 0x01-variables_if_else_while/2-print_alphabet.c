#include <stdio.h>

/**
 *main - prints alphabets from lowercase a to z
 *
 *Return: returns 0 once it's successful
*/

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
