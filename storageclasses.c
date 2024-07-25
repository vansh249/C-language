#include<stdio.h>
int a; // external storage class | global variable (declaration of variable 'a')
int main()
{
    auto int x; // == int x; (both are same)

    register int y;

    static int z;

    extern int a; // this is only to inform about the variable 'a' not a declaration
}
