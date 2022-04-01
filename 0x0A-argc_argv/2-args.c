#include <stdio.h>

/**
 * main - prints all the arguements
 *
 * @argc: the number of arguments passed
 * @argv: the array of arguments passed
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
