#include <stdio.h>
// to print cubes of first 10 natural numbers
int main()
{
    int num;
    for (num = 1; num <= 10; num++)
    {
        int cube = num * num * num;
        printf("cube of %d is %d\n", num, cube);
    }
    return 0;
}