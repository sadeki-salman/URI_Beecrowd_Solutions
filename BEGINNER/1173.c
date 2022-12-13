#include <stdio.h>
int main()
{
    int V, N[10];
    scanf("%d", &V);

    for (int i = 0; i < 10; i++, V *= 2)
    {
        N[i] = V;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("N[%d] = %d\n", i, N[i]);
    }

    return 0;
}