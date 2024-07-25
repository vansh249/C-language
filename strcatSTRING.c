#include<stdio.h>
#include<string.h>
int main()
{
    char s1[20],s2[20];
    printf("Enter two strings");
    fgets(s1,20,stdin);
    fgets(s2,20,stdin);
    printf("%s",strcat(s1,s2));
    return 0;
}