#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter four numbers");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    printf("The greater number is %d",a>b?a>c?a>d?a:d:c>d?c:d:b>c?b>d?b:d:c>d?c:d);
    return 0;
}