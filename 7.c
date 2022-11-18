#include <stdio.h>
// to print first 10 even numbers in reverse order
int main()
{
    int i;
    for (i = 20; i >= 1; i -= 2)
    {
        printf("%d\n", i);
    }
    return 0;
}