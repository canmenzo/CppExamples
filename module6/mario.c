// Prints an n-by-n grid of bricks with a loop

#include <cs50.h>
#include <stdio.h>

// main function
int main(void)
{
    // get input and validate for between 1 and 8
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1 || n > 8);
    // for loops to print # and " "
    for (int i = 0; i < n; i++)
    {
        for (int a = n - 1; a > i; a--)
        {
            printf(" ");
        }
        for (int j = -1; j < i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
