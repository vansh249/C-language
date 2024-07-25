#include<stdio.h>
int main()
{
    char s[5][10];
    int i;
    printf("Enter 5 strings");
    for(i=0;i<=4;i++)
        fgets(s[i],10,stdin);
    for(i=0;i<=4;i++)
        printf("%s",s[i]);
    return 0;
}