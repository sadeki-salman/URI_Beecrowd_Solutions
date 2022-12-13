#include <stdio.h>
int main()
{
    int X, sum;

    while (1)
    {
        scanf("%d", &X);
        if (X == 0)
            break;
        sum = 0;
        for (int i = X; i < X + 10; i++)
        {
            if (i % 2 == 0)
                sum += i;
        }
        printf("%d\n", sum);
    }
    return 0;
}