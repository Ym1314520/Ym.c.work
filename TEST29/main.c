#include<stdio.h>
#include<stdlib.h>
int LCM(int a,int b);
void main()
{
printf("Input m,n:");
int a,b,c,d,t;
float m,n;
scanf("%d/%d,%d/%d",&c,&a,&d,&b);
t=LCM(a,b);
m=(float)c/a*t;
n=(float)d/b*t;
if(m<n)
{
    printf("%d/%d<%d/%d",c,a,d,b);
}
else if(m>n)
    {
        printf("%d/%d>%d/%d",c,a,d,b);
    }
else
{
    printf("%d/%d=%d/%d",c,a,d,b);
}

}

int LCM(int a,int b)
{
    int i;
    for(i=a;;i++)
    {
    if(i%a==0&&i%b==0)
        break;
    }
    return i;
}
