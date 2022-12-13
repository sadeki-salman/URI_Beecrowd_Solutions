#include <stdio.h>
int main()
{
    int N, arr[50];
    scanf("%d", &N);
    arr[0] = 0;
    arr[1] = 1;
    for (int i = 2; i < N; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
    printf("0");
    for (int j = 1; j < N; j++)
    {
        printf(" %d", arr[j]);
    }
    printf("\n");
    return 0;
}