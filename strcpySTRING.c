#include<stdio.h>
#include<string.h>
int main()
{
    char s1[20],s2[20];
    printf("Enter a string");
    fgets(s1,20,stdin);
    strcpy(s2,s1);
    printf("%s",s2); 
    return 0;
}