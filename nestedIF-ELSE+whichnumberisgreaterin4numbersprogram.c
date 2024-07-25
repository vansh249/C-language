#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter four numbers");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    
    if(a>b)
    {
        if(a>c)
        {
            if(a>d)
            printf("The greater number is %d",a);
            else
            printf("The greater number is %d",d);

        }
        else
        {
            if(c>d)
            printf("The greater number is %d",c);
            else
            printf("The greater number is %d",d);
        }
    }
    else
    {
        if(b>c)
        {
            if(b>d)
            printf("The greater number is %d",b);
            else
            printf("The greater number is %d",d);  
        }
        else
        {
            if(c>d)
            printf("The greater number is %d",c);
            else
            printf("The greater number is %d",d);

        }
        
    }
    return 0;

}
