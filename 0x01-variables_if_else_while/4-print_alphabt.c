#include <stdio.h>

/**
 *main - prints alphabets from lowercase a to z
 *
 *Return: returns 0 once it's successful
*/

int main(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'q' && ch != 'e')
		{
		putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
