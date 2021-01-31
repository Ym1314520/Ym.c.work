#include <stdio.h>
#include <stdlib.h>
void main()
{
    int a[12]={1},b[12]={0};
    int i,t;
    for(i=0;i<11;i++)
    {
    a[i+1]=a[i]+b[i];
    b[i+1]=a[i];
    }
    printf("%d",a[i]+b[i]);
}
