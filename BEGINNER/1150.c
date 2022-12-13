#include <stdio.h>
int main()
{
    int X, Z, count = 1, sum = 0, i;
    scanf("%d %d", &X, &Z);
    while (Z <= X)
        scanf("%d", &Z);
    for (i = X; i < Z; i++)
    {
        sum += i;
        if (sum > Z)
            break;
        count++;
    }
    printf("%d\n", count);
    return 0;
}