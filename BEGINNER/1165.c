#include <stdio.h>
int main()
{
    int N, X, count;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &X);
        count = 0;
        for (int j = 2; j <= X/2; j++)
        {
            if (X % j == 0)
            {
                count = 1;
                break;
            }
        }
        if (count == 0)
            printf("%d eh primo\n", X);
        else
            printf("%d nao eh primo\n", X);
    }
    return 0;
}