#include <stdio.h>

/**
 * fizz_buzz - prints fizz for multiples
 * of 3 and buzz for multiples of 5
 */

void fizz_buzz(void)
{
    int i;

    for (i = 1; i <= 100; i++)
    {
        if (i % 3 == 0)
        {
            printf("Fizz");
        }
        else if(i % 5 == 0)
        {
            printf("Buzz");
        }
    }   else if(i % 15 == 0)
        {
            printf("FizzBuzz")
        }
        else
        {
            printf(i);
        }

    
}