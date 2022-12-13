#include <stdio.h>
int main()
{
    int h, s;
    double f;
    scanf("%d %d", &h, &s);
    f = (h * s) / 12.0;
    printf("%.3lf\n", f);
    return 0;
}