#include<stdio.h>
void input(int b[], int size);
void display(int b[], int size);
int main()
{
    int a[5];
    input(a,5);
    display(a,5);
    return 0;

}
void input(int b[], int size)
{
    int i;
    printf("Enter %d values",size);
    for(i=0;i<size;i++)
       scanf("%d",&b[i]);
}
void display(int b[], int size)
{
    int i;
    for(i=0;i<size;i++)
        printf("%d ",b[i]);
}