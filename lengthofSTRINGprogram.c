#include<stdio.h>
int main()
{
    char str[20];
    int i;
    printf("Enter a string");
    fgets(str,20,stdin);
    for(i=0;str[i];i++);
    printf("Length of string is %d",i);
    return 0;
}