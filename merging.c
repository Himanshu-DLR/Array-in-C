#include<stdio.h>
int main()
{
    int i,merg;
    int arr[6]={42,67,53,97,28};
    printf("Enter the position to be merge:");
    scanf("%d",&merg);
    for(i=4;i>=merg;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[merg]=99;
    printf("Array after merging:");
    for(i=0;i<6;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}