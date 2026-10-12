#include<stdio.h>
int main()
{
    int n,temp,rev=0,r;
    printf("Enter a number:");
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if(temp==rev)
        printf("The number is a palindrome.");
    else
        printf("The number is not a palindrome.");
    return 0;
}