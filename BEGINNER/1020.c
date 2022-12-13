#include <stdio.h>
int main()
{
    int N, y, m;
    scanf("%d", &N);

    y = N / 365;
    N = N % 365;
    m = N / 30;
    N = N % 30;

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", y, m, N);
    return 0;
}