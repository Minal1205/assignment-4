#include <stdio.h>
// to print square of first 10 natural numbers
int main()
{
    int num;
    for (num = 1; num <= 10; num++)
    {
        int square = num * num;
        printf("Square of %d is %d\n", num, square);
    }
    return 0;
}