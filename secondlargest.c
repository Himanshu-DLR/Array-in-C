#include<stdio.h>
int main()
{
    int a[100],n,i,largest,second;
    printf("Enter size of array:");
    scanf("%d",&n);
    if(n<2||n>100)
    {
        printf("Invalid size of array:");
        return 0;
    }
    printf("Enter the array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    largest=second=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>largest)
        {
            second=largest;
            largest=a[i];
        }
        else if(a[i]>second && a[i]<largest)
        {
            second=a[i];
        }
    }
    if(second==largest)
    {
        printf("There is no second largest element in the array.\n");
    }
    else
    {
        printf("The second largest element in the array is: %d\n",second);
    }
    return 0;
}