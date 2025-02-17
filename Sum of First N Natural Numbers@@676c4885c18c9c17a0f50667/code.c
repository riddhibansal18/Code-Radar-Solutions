#include <stdio.h>

int main()
{
    int i,N,sum=0;
    scanf("%d",&N);
    for(i=0;i<=N;i++)
    {
    printf("%d\n", i);
    sum=sum+i;
    }
    printf("\nsum=%d",sum);
    
}