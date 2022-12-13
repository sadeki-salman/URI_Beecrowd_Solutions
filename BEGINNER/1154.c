#include <stdio.h>
int main()
{
    int n, age = 0;
    double count = 0;
    while (1)
    {
        scanf("%d", &n);
        if (n < 0)
            break;
        age += n;
        count++;
    }
    printf("%.2lf\n", age / count);
    return 0;
}