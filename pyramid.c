#include <stdio.h>

void print_line(int n)
{
    for (int i = 4; i >= n; i--)
    {
        printf("*");
    }
    printf("\n");
}


int main()
{
    for (int n = 4; n > 0; n--)
    {
        print_line(n);
    }
    return 10;
}