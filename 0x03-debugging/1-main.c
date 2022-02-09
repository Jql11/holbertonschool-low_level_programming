#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
* there is no i increment, so i will always be 0, which is less than 10 
*/

int main(void)
{
        int i;

        printf("Infinite loop incoming :(\n");

        i = 0;

        while (i < 10)
        {
                putchar(i);
        }

        printf("Infinite loop avoided! \\o/\n");

        return (0);
}
