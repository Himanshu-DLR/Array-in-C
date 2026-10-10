#include<stdio.h>
int main()
{
    int arr[]={10,20,36,5,12};
    int i,max=arr[0],min=arr[0];
    for(i=0;i<4;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
        if(min>arr[i])
        {
            min=arr[i];
        }
    }
    printf("Maximum element is %d\n", max);
    printf("Minimum element is %d\n", min);
    return 0;
}