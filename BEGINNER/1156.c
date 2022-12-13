#include <stdio.h>
int main()
{
    float i, j, sum = 0;
    for (i = 1, j = 1; i < 40; i += 2, j *= 2)
    {
        sum += (i / j);
    }
    printf("%.2f\n", sum);
    return 0;
}