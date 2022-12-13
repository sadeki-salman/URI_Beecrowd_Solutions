#include <stdio.h>
int main()
{
    int N;
    while (1)
    {
        scanf("%d", &N);
        if (N == 0)
            break;
        else
        {
            printf("%d", 1);
            for (int i = 2; i <= N; i++)
                printf(" %d", i);
            printf("\n");
        }
    }
    return 0;
}