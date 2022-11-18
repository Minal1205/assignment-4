#include <stdio.h>
// to print multiplication table of 5
int main()
{
    int i;
    for (i = 1; i <= 10; i++)
    {
        int table = 5 * i;
        printf("5 x %d = %d\n", i, table);
    }
    return 0;
}