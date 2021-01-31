#include<stdio.h>
#include<stdlib.h>
int Getmax(int a[]);
void main()
{
    int a[10];
    int i;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]<0)
        break;
    }
    printf("max=%d\n",Getmax(a));
}

int Getmax(int a[])
{
    int i,max=0;
    for(i=1;i<10;i++)
    {
        if(a[i]>=a[max])
        {
        max=i;
        }

    }
    return a[max];
}
