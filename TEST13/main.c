#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,sum=0;
    for(i=1;i<=100;i++)
    {
    if(i%3==0&&i%7!=0)
    {
    sum=sum+i;
    }
    }
    printf("%d",sum);
    return 0;
}
