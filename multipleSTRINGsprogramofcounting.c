#include<stdio.h>
#include<string.h>
int main()
{
    char s[5][10];
    int i,j,count=0;
    printf("Enter 5 Strings");
    for(i=0;i<=4;i++)
        fgets(s[i],10,stdin);
    for(i=0;i<=4;i++)
        printf("%s",s[i]);
    for(i=0;i<=4;i++)
    {
        for(j=0;s[i][j];j++)
            if(s[i][j]=='a')
                count++;
    }
    printf("Total no. of \'a\' is %d",count);
    return 0;
        
}