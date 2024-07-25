#include<stdio.h>
#include<string.h>
int main()
{
    char s1[20],s2[20];
    printf("Enter two strings");
    fgets(s1,20,stdin);
    fgets(s2,20,stdin);
    if(!strcmp(s1,s2))
        printf("Strings are same");
    else
        printf("String are not same");
    return 0;
}