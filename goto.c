#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number");
    scanf("%d",&x);
    printf("One");
    if(x>0)
        goto l1; //Label
    printf("Two");
    printf("Three");
    l1:
    printf("Four");
    l2:
    printf("Five");
    l3:

    return 0;

}