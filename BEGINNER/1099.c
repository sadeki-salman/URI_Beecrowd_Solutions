#include <stdio.h>
int main()
{
    int N, X, Y, max, min, sum;
    scanf("%d", &N);
    while (N != 0)
    {
        scanf("%d %d", &X, &Y);

        if (Y > X)
        {
            max = Y;
            min = X + 1;
        }
        else
        {
            max = X;
            min = Y + 1;
        }
        sum = 0;
        for (int i = min; i < max; i++)
        {
            if (i % 2 != 0)
                sum += i;
        }
        printf("%d\n", sum);
        N--;
    }
    return 0;
}