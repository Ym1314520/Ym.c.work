#include <stdio.h>
#include <stdlib.h>
int mode_num(int a[],int n);
void main()
{
int a[10],n=10;
int i,max;
for(i=0;i<10;i++)
{
    scanf("%d",&a[i]);
}
max=mode_num(a,n);
printf("%d",a[max]);
}
int mode_num(int a[],int n)
{
    int count,i,b[n],j;
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=i+1;j<n;i++)
        {
            if(a[i]=a[j])
            {
                count++;
            }
        }
        b[i]=count;
    }
    int max=0;
    for(i=0;i<n;i++)
    {
    if(b[max]<b[i])
    {
        max=i;
    }
    }
    return max;
}
