#include <stdio.h>
/**
 * main - prints the multiplication of two ints
 *
 * @argc: the number of arguments
 * @argv: string array of arguments
 * return: 1 if unsuccessful, 0 if successful
 */
int main(int argc, char *argv)
{
    if (argc != 3)
    {
        printf("Error\n");
        return (1);
    }
    else
    {
        printf("%d\n", atoi(argv[1] * argv[2]));
    }
}
