#include <stdio.h>
int main()
{
    int T, PA, PB, Year;
    double G1, G2;
    scanf("%d", &T);

    while (T > 0)
    {
        scanf("%d %d %lf %lf", &PA, &PB, &G1, &G2);
        Year = 0;
        while (PA <= PB)
        {
            PA += PA * (G1 / 100);
            PB += PB * (G2 / 100);
            Year++;
            if (Year > 100)
                break;
        }
        if (Year <= 100)
            printf("%d anos.\n", Year);
        else
            printf("Mais de 1 seculo.\n");

        T--;
    }
    return 0;
}