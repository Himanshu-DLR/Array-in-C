#include<stdio.h>
int main()
{
    int i,first=0,second=1,sum,n;
    printf("Enter the number till where you want the Fibonacci series:");
    scanf("%d",&n);
    printf("The Fibonacci series is:");
    for(i=0;i<=n;i++)
    {
        printf("%d ",first);
        sum=first+second;
        first=second;
        second=sum;
    }
    return 0;
}                                                                                                                                                                                                                                                                                                                     