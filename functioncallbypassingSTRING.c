#include<stdio.h>
int main()
{
    char str[20];
    printf("Enter a string");
    fgets(str,20,stdin);
    printf("Length of %s is %d",str,length(str));
    return 0;
}
int length(char s[])
{
    int l;
    for(l=0;s[l];l++);
    return (l);
}