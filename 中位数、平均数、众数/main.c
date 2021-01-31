#include<stdio.h>
#include<stdio.h>
#define N 40
void paixu(int n[N]);
void zhongshu(int n[N]);
void main()
{
    printf("Input the feedbacks of 40 students:\n");
    int n[N],i,sum=0,ave;
    for(i=0;i<N;i++)
    {
        scanf("%d",&n[i]);
        sum=sum+n[i];
    }
    ave=sum/N;
    printf("Mean value=%d\n",ave);
    paixu(n);
zhongshu(n);
}
void paixu(int n[N])
{
    int i,j,t;
    for(i=0;i<40-1;i++)
    {
        for(j=0;j<40-i;j++)
        {
            if(n[j]>n[j+1])
            {
                t=n[j];
                n[j]=n[j+1];
                n[j+1]=t;
            }
        }
    }
    printf("Median value=%d\n",(n[19]+n[20])/2);
}
void zhongshu(int n[])
{
    int i,m[10]={0};
    for(i=0;i<N;i++)
    {
        if(n[i]==1)
        {
            m[0]++;
        }
        else if(n[i]==2)
        {
            m[1]++;
        }
        else if(n[i]==3)
        {
            m[2]++;

        }
        else if(n[i]==4)
        {
            m[3]++;
        }
        else if(n[i]==5)
        {
            m[4]++;
        }
        else if(n[i]==6)
        {
            m[5]++;
        }
        else if(n[i]==7)
        {
            m[6]++;
        }
        else if(n[i]==8)
        {
            m[7]++;
        }
        else if(n[i]==9)
        {
            m[8]++;
        }
        else if(n[i]==10)
        {
            m[9]++;
        }
    }
    int max=0;
    for(i=0;i<10;i++)
    {
        if(m[i]>m[max])
        {
            max=i;
        }
    }
    printf("Mode value=%d\n",max+1);
}


