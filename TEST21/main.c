#include<stdio.h>
float Zhuheshu(int m,int k);
long JC(int i);
void main()
{
    int m,k;
    float p;
    printf("Input m,k (m>=k>0):");
    do
    {
        scanf("%d,%d",&m,&k);
    }while(m<k&&m>0&&k>0);
    printf("p = %.0f\n",Zhuheshu(m,k));
}
float Zhuheshu(int m,int k)
{
    float p;
    p=(float)JC(m)/(JC(m-k)*JC(k));
    return p;
}
long JC(int i)
{
    int j;
    long result=1;
    for(j=1;j<=i;j++)
    {
        result*=j;
    }
    return result;
}
