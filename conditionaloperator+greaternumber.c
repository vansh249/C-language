#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter any two numbers");
    scanf("%d%d",&a,&b);
    printf("The greater number is %d",a>b?a:b);
    return 0;
}