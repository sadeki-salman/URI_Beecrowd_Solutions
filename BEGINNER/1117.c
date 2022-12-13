#include <stdio.h>
int main()
{
    float n, sum = 0, count = 0;
    while (1)
    {
        if (count == 2)
            break;
        scanf("%f", &n);
        if (n >= 0 && n <= 10)
        {
            count++;
            sum += n;
        }
        else
            printf("nota invalida\n");
    }
    printf("media = %.2f\n", sum / 2.0);
    return 0;
}