#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    printf("Enter a string");
    fgets(str,20,stdin);
    printf("String is %s", strrev(str));
    return 0;
}