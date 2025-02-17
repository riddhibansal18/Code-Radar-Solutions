#include <stdio.h>

int main()
{
    int i,N,sum=0;
    printf("Enter the value of N:");
    scanf("%d",&N);
    for(i=0;i<=N;i++)
    {
    printf("%d\n", i);
    sum=sum+i;
    }
    printf("\n sum=%d", sum);
    
}