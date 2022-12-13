#include <stdio.h>
int main()
{
    int X, i = 0;
    scanf("%d", &X);
    while (i < 6)
    {
        if (X % 2 != 0)
        {
            printf("%d\n", X);
            i++;
        }
        X++;
    }
    return 0;
}