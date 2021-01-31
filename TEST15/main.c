#include<stdio.h>
main()
{
    int i,sum=0,k;
    for(i=500;i>=443;i--)
    {
        for(k=2;k<=i;k++)
        {
        if(i%k==0)
        break;
        }
        if(k==i)
        {
            printf("%6d",i);
        sum=sum+i;

        }
    }
        printf("\n sum=%d\n",sum);
    }
