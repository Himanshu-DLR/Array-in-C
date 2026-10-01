#include<stdio.h>
int main()
{
    int i,j,arr1[2][2],arr2[2][2],arr3[2][2];
    printf("Enter the first array:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("Enter the second array:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            arr3[i][j]=arr1[i][j]-arr2[i][j];
        }
    }
    printf("The 2-D array after subtraction:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d  ",arr3[i][j]);
        }
        printf("\n");
    }
    return 0;
}