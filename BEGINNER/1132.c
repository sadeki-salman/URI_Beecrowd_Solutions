#include <stdio.h>
int main()
{
    int X, Y, sum = 0, min, max;
    scanf("%d %d", &X, &Y);
    if (X > Y)
    {
        min = Y;
        max = X;
    }
    else
    {
        min = X;
        max = Y;
    }
    for (int i = min; i <= max; i++)
        if (i % 13 != 0)
            sum += i;
    printf("%d\n", sum);

    return 0;
}