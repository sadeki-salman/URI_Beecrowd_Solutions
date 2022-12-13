#include<stdio.h>
int main()
{
    int N, X, Y, sum;

    scanf("%d", &N);
    for(int i=0; i<N; i++){
        sum=0;
        scanf("%d %d",&X, &Y);
        for(int j=X; j<X+Y*2; j++){
            if(j%2!=0)
                sum+=j;
        }
        printf("%d\n",sum);
    }
    return 0;
}