#include <stdio.h>
// header for get_int
#include <cs50.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("Height: ");
    }
    // Validates Input
    while (n < 1 || n > 8);
    {
        for (int i = 0; i < n; i++)
        {
            // Print spaces
            for (int k = n - 2; k >= i; k--)
            {
                printf(" ");
            }
            // Print block
            for (int j = 0; j <= i; j++)
            {
                printf("#");
            }
            printf("\n");
        }
    }
}
