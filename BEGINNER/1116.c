#include <stdio.h>
int main()
{
    int N, i, X, Y;
    scanf("%d", &N);
    for (i = 0; i < N; ++i)
    {
        scanf("%d %d", &X, &Y);
        if (Y == 0)
            printf("divisao impossivel\n");
        else
            printf("%.1f\n", (float)((X * 1.0) / Y));
    }

    return 0;
}