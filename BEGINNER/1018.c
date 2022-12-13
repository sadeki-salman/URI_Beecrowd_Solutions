#include <stdio.h>
int main()
{
    int N, temp, n100, n50, n20, n10, n5, n2, n1;
    scanf("%d", &N);
    temp = N;
    n100 = N / 100;
    N = N % 100;
    n50 = N / 50;
    N = N % 50;
    n20 = N / 20;
    N = N % 20;
    n10 = N / 10;
    N = N % 10;
    n5 = N / 5;
    N = N % 5;
    n2 = N / 2;
    N = N % 2;
    n1 = N;
    printf("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n", temp, n100, n50, n20, n10, n5, n2, n1);

    return 0;
}