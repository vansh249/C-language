#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p;
    p=(int*)malloc(4);

    int *a;
    a=(int*)calloc(5,4);

    p=realloc(p,40);

    free(a);

    return 0;
}
/*
1)  malloc()
2)  Type casting
3)  calloc()
4)  free()
5)  realloc()
*/