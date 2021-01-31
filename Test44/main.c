#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=2;
    int *m=&a;
    printf("a is %d,a is %p,a is %p",a,&a,*m);
    return 0;
}
