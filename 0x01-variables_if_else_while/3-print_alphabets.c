#include <stdio.h>

/**
 *main - prints out all upper and lower case letters together
 *Return: Returns 0 once code runs successfully
*/

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	putchar(ch);
	putchar('\n');

	return (0);
}
