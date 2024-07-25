#include<stdio.h>
int main()
{
    int x;
    printf("Enter any number");
    scanf("%d",&x);
    if(x>0)
    {
        printf("The number is positive");
    }
    if(x<=0)
    {
        printf("The number is not positive");
    }
    return 0;

}