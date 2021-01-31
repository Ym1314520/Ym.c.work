#include<stdio.h>
#include<math.h>
#define EPS 1e-6
int main()
{
    float a,b,c,p,q;
    scanf("%f,%f,%f",&a,&b,&c);
    if(fabs(a)<=EPS)
    {
        printf("The equation has no answer!");
        exit(0);
    }
    else
    {
        float disc;
    disc=b*b-4*a*c;
    p=-b/(a*2);
    q=sqrt(fabs(disc))/(2*a);
    if(fabs(disc)<=EPS)
    {
      printf("x1=x2=%.2f\n",p);
    }
    else
    {
       if(disc>EPS)
       {
           printf("x1=%d,x2=%d\n",p+q,p-q);
       }
       else
        {
        printf("x has no answer!");
        }
    }
    }
}

