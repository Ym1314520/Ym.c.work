#include<stdio.h>
void main()
{
int i;
for(i=1;i<=100;i++)
{
    Get_Wan(i);
    printf("%d",Get_Wan(i));
}
}
int Get_Wan(int n)
{
    int j,sum=0;
    for(j=1;j<n;j++)
    {
        if(n%j==0)
        {
            sum=sum+j;
        }
    }
    if(sum==n)
    {
        return sum;
    }
}
