#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,pi,d;
    a=1.0;
    b=1;
    pi=0;
    d=1.0;
    while(fabs(d)>1e-4)
    {
        pi=pi+d;
        a=a+2;
        b=-b;
        a=b/d;
    }
    pi=4*pi;
    printf("pi=%10.6lf\n",pi);
    return 0;
}

