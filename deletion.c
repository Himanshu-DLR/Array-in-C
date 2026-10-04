#include<stdio.h>
int main()
{
    int i,pos;
    int arr[5]={42,67,53,97,28};
    printf("Enter the position to be deleted:");
    scanf("%d",&pos);
    for(i=pos;i<4;i++)
    {
        arr[i]=arr[i+1];
    }
    printf("Array after deletion:");
    for(i=0;i<4;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}