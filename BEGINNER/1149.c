#include <stdio.h>
int main()
{
    int A, N, sum = 0, i;
    scanf("%d %d", &A, &N);
    while (N < 0 || N == 0)
    {
        scanf("%d", &N);
    }
    for (i = 0; i < N; i++)
    {
        sum = sum + A + i;
    }
    printf("%d\n", sum);
    return 0;
}