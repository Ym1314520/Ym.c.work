#include <stdio.h>
#include <stdlib.h>
#define EPS 1e-1
#include<math.h>

int main()
{
    float a,b,c;
    int flag=1;
    printf("Input a,b,c:");
    scanf("%f,%f,%f",&a,&b,&c);
    if(a+b>c&&a+c>b&&b+c>a)
    {
        if(fabs(a-b)<=EPS||fabs(a-c)<=EPS||fabs(b-c)<=EPS)
        {
            printf("����");
            flag=0;
        }
        if(fabs(a*a+b*b-c*c)<=EPS||fabs(a*a+c*c-b*b)<=EPS||fabs(b*b+c*c-a*a)<=EPS)
        {
            printf("ֱ��");
            flag=0;
        }
        if(flag)
        {
            printf("һ��");
        }
        printf("������");
    }
        else
        {
            printf("����������");
        }
        return 0;

    }

