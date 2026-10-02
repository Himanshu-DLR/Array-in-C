#include<stdio.h>
#include<string.h>
int main()
{
    char str[8] = "Helcome";
    printf("String in %s",str);
    str[0]='W';
    printf("String after updation:%s",str);
    return 0;
}