#include <stdio.h>
int main()
{
    int N, h, m;
    scanf("%d", &N);

    h = N / 3600;
    N = N % 3600;
    m = N / 60;
    N = N % 60;

    printf("%d:%d:%d\n", h, m, N);
    return 0;
}