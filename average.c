#include<stdio.h>
int main()
{
    int a[5],b[5],i;
    float c[5];
    printf("Enter the input of a:--");
    for(i=0;i<5;i++)
    {
        scanf("%d  ",&a[i]);
    }
    printf("Enter the input of b:--");
    for(i=0;i<5;i++)
    {
        scanf("%d  ",&b[i]);
    }
    for(i=0;i<5;i++)
    {
        c[i]=(a[i]+b[i])/2.0;
    }
    printf("Average of each array:--");
    for(i=0;i<5;i++)
    {
        printf("%.2f  ",c[i]);
    }
    return 0;
}