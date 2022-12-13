#include <stdio.h>
int main()
{
    int M, N, min, max, sum;
    while (1)
    {
        scanf("%d %d", &M, &N);
        if (M <= 0 || N <= 0)
            break;

        if (M > N)
        {
            min = N;
            max = M;
        }
        else
        {
            min = M;
            max = N;
        }
        sum = 0;
        for (int i = min; i <= max; i++)
        {
            printf("%d ", i);
            sum += i;
        }
        printf("Sum=%d\n", sum);
    }
    return 0;
}