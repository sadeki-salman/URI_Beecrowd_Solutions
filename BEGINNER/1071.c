#include <stdio.h>
int main()
{
    int X, Y, sum = 0, i, min, max;

    scanf("%d %d", &X, &Y);

    if (X < Y)
    {
        min = X;
        max = Y;
    }
    else
    {
        max = X;
        min = Y;
    }

    for (i = (min + 1); i < max; i++)
        if (i % 2 != 0)
            sum += i;

    printf("%d\n", sum);
    return 0;
}