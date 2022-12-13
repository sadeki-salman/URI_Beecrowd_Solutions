#include <stdio.h>
int main()
{
    float num, sum = 0;
    int i, count = 0;
    for (i = 1; i <= 6; i++)
    {
        scanf("%f", &num);
        if (num > 0)
        {
            sum += num;
            count++;
        }
    }
    printf("%d valores positivos\n%.1f\n", count, sum / count);
    return 0;
}