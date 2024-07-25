#include<stdio.h>
int main()
{
    int a,b,*p,*q;
    p=&a;
    q=&b;
    //pointer's arithmetic operations
    p+1;
    p+2;
    p+5;
    p-2;
    q-p;
    p-q;

    /* invalid operations of pointers
    p+q;
    p*q;
    p/q;
    p*5;
    p/3;
    */

    //pointers and arrays
    int a[5];
    int *p;
    p=&a;
    //array of pointers
    int *ptr[4];
    //pointer to array
    int (*p)[4];

    /*types of pointers
    1. Wild pointer 
    2. NULL pointer -> int *p=NULL; (use if with NULL pointer)
    3. Dangling pointer
    4. Void pointer
    */
    return 0;
}