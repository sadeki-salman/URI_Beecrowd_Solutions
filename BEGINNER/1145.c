#include <stdio.h>
int main()
{
    int X, Y;
    scanf("%d %d", &X, &Y);
    for (int i = 1; i < Y; i += X)
    {
        if (i + X - 1 <= Y)
        {
            printf("%d", i);
            for (int j = 1; j < X; j++)
                printf(" %d", i + j);
            printf("\n");
        }
    }
    return 0;
}