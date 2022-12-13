#include <stdio.h>
int main()
{
    int highest = 0, position, arr[100];
    for (int i = 0; i < 100; i++)
        scanf("%d", &arr[i]);

    for (int i = 0; i < 100; i++)
    {
        if (arr[i] > highest)
        {
            highest = arr[i];
            position = i + 1;
        }
    }
    printf("%d\n%d\n", highest, position);
    return 0;
}