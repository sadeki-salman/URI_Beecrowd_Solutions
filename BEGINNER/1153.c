#include <stdio.h>
int main()
{
    int N, k = 1;
    scanf("%d", &N);
    for (int i = 1; i < N; i++)
        k = k + k * i;
    printf("%d\n", k);
    return 0;
}