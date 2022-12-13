#include <stdio.h>
int main()
{
    int X, Y, min, max;
    scanf("%d %d", &X, &Y);
    if (X > Y)
    {
        min = Y + 1;
        max = X;
    }
    else
    {
        min = X + 1;
        max = Y;
    }
    for (int i = min; i < max; i++)
        if (i % 5 == 2 || i % 5 == 3)
            printf("%d\n", i);
    return 0;
}