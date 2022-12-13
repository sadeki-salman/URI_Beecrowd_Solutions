#include <stdio.h>
int main()
{
    float n, X, sum, count;
    sum = count = 0;
    while (1)
    {
        scanf("%f", &n);
        if (n < 0.0 || n > 10.0)
            printf("nota invalida\n");
        else
        {
            sum += n;
            count++;
            if (count == 2)
            {
                printf("media = %.2lf\n", sum / 2);
                printf("novo calculo (1-sim 2-nao)\n");
                while (1)
                {
                    scanf("%f", &X);
                    if (X == 1)
                    {
                        sum = count = 0;
                        break;
                    }
                    else if (X == 2)
                        return 0;
                    else
                        printf("novo calculo (1-sim 2-nao)\n");
                }
            }
        }
    }
    return 0;
}