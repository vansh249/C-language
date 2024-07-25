#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    int l;
    printf("Enter a string\n");
    fgets(str,20,stdin);
    l=strlen(str);
    printf("Length of string is %d",l);
    return 0;
}