#include <stdio.h>
int main()
{
    int arr[15], even[15], odd[15], j = 0, k = 0;
    for (int i = 0; i < 15; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0)
        {
            even[j] = arr[i];
            j++;
        }
        if (j == 5)
        {
            for (int i = 0; i < j; i++)
            {
                printf("par[%d] = %d\n", i, even[i]);
            }
            j = 0;
        }
        if (arr[i] % 2 != 0)
        {
            odd[k] = arr[i];
            k++;
        }
        if (k == 5)
        {
            for (int i = 0; i < k; i++)
            {
                printf("impar[%d] = %d\n", i, odd[i]);
            }
            k = 0;
        }
    }
    for (int i = 0; i < k; i++)
        printf("impar[%d] = %d\n", i, odd[i]);
    for (int i = 0; i < j; i++)
        printf("par[%d] = %d\n", i, even[i]);

    return 0;
}