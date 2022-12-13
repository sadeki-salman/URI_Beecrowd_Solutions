#include <stdio.h>
int main()
{

    int h, hh, m, mm, d, dm, s, ss;

    scanf("%*s %d", &d);
    scanf("%d %*s %d %*s %d", &h, &m, &s);
    scanf("%*s %d", &dm);
    scanf("%d %*s %d %*s %d", &hh, &mm, &ss);

    s = ss - s;
    m = mm - m;
    h = hh - h;
    d = dm - d;

    if (s < 0)
    {
        s += 60;
        m--;
    }
    if (m < 0)
    {
        m += 60;
        h--;
    }
    if (h < 0)
    {
        h += 24;
        d--;
    }

    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", d, h, m, s);

    return 0;
}