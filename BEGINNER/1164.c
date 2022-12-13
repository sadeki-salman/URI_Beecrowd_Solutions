#include <stdio.h>
int main()
{
    int N, X, sum;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        sum = 0;
        scanf("%d", &X);
        for (int j = 1; j <= X/2; j++)
        {
            if (X % j == 0)
                sum += j;
        }
        if (sum == X)
            printf("%d eh perfeito\n", X);
        else
            printf("%d nao eh perfeito\n", X);
    }
    return 0;
}