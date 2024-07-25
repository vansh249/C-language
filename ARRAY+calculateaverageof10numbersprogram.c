#include<stdio.h>
int main()
{
    int a[10],i,s=0;
    float avg;
    printf("Enter 10 numbers");
    for(i=0;i<=9;i++)
       scanf("%d",&a[i]);
    
    for(i=0;i<=9;i++)
        s=s+a[i];
    avg=s/10.0;
    printf("Average is %f",avg);
    return 0;

}