#include <stdio.h>
int main()
{
    int a, b, c, d, duration;
    scanf("%d %d %d %d", &a, &c, &b, &d);

    duration = ((b * 60) + d) - ((a * 60) + c);

    if (duration <= 0)
        duration += 24 * 60;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", duration / 60, duration % 60);

    return 0;
}