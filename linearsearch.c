#include<stdio.h>
int main()
{
    int arr[10],i,found,key;
    printf("Enter tthe array elements:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to be searched:\n");
    scanf("%d",&key);
    for(i=0;i<10;i++)
    {
        if(arr[i]==key)
        {
            found=1;
            break;
        }
    }
    if(found==1)
    {
        printf("Element found in the array.\n");
    }
    else
    {
        printf("Element not found in the array.\n");
    }

}