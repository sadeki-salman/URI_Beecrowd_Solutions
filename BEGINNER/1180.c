#include <stdio.h>
int main()
{
    int N, smallest, position;
    scanf("%d", &N);
    int X[N];

    for (int i = 0; i < N; i++)
        scanf("%d", &X[i]);

    smallest = X[0];
    for (int i = 1; i < N; i++)
    {
        if (smallest > X[i])
        {
            smallest = X[i];
            position = i;
        }
    }
    printf("Menor valor: %d\nPosicao: %d\n", smallest, position);
    return 0;
}