#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    for (int i = 1; i <= 10000; i++)
        if (i % N == 2)
            printf("%d\n", i);
}