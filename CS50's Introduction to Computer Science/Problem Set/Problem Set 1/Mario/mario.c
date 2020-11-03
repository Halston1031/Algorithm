#include <stdio.h>
#include <cs50.h>
void pyramid(int n);

// asks for pyramid height, checks the input and then executes the function
int main(void)
{
    int height = 0;
    // asks for height until it is a int comprised between 1 and 8
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);
    pyramid(height);
}

// generates a ramp of hashes n tall and as large as the line number (i)
void pyramid(int n)
{
    for (int i = 0; i < n; i++)
    {
        // prints empty spaces first
        for (int j = n - i - 2; j >= 0; j--)
        {
            printf(" ");
        }
        // then the actual ramp
        for (int k = 0; k <= i; k++)
        {
            printf("#");
        }
        // moves one line down
        printf("\n");
    }
}