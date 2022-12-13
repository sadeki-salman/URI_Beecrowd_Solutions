#include <stdio.h>
int main()
{
    int T, N[1000];
    scanf("%d", &T);
    for (int i = 0, j = 0; i < 1000; i++, j++)
    {
        printf("N[%d] = %d\n", i, j);
        if (T - 1 == j)
            j = -1;
        ;
    }
    return 0;
}