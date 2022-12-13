#include <stdio.h>
int main()
{
    char employee;
    double salary, sold, total_sallary;
    scanf("%s %lf %lf", &employee, &salary, &sold);
    total_sallary = salary + (sold * 15) / 100;
    printf("TOTAL = R$ %.2f\n", total_sallary);

    return 0;
}