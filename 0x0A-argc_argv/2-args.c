#include <stdio.h>

/**
 * main - prints all the arguements
 *
 * @argc: the number of arguments passed
 * argv: the array of arguments passed
 * @return int
 */
int main(int argc, char *argv[])
{
    int i;

    for (i = 0; i < (argc - 1); i++)
    {
        printf("%d\n",argv[0]);
        Return (0);
    }
}
