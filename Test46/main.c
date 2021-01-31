#include<stdio.h>
#include<stdlib.h>
#define N 5
void Read(int a[],int n);
void Average(int a[],int n);
void FindMax_i(int a[],int n);
void Find_x(int a[],int n);
void Sorted(int a[],int n);
void main()
{
    int a[N],choose;
    Read(a,N);
    do{
        printf("\n�����룺1--��ƽ��ֵ,2--����,3--����,4--����߷�,0--�˳�.\n");
        scanf("%d",&choose);
        switch(choose)
        {
        case 1:
            Average(a,N);
            break;
        case 2:
            Sorted(a,N);
            break;
        case 3:
            Find_x(a,N);
            break;
        case 4:
            FindMax_i(a,N);
            break;
        case 0:
            printf("лл����ʹ�ã��ټ���");
            exit(0);
            break;

        }
    }while(1);
}
void Read(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
    printf("�������%d��ѧ���ĳɼ�",i+1);
    scanf("%d",&a[i]);
    }
}
void FindMax_i(int a[],int n)
{
    int i,max=0;
    for(i=1;i<n;i++)
    {
        if(a[max]<a[i])
        {
            max=i;
        }
    }
    printf("ѧ���гɼ���ߵ���%d��ѧ�����ɼ�Ϊ��%d",max,a[max]);
}
void Sorted(int a[],int n)
{
    int i,j,t;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(a[j]<a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    printf("�ɼ��ɸߵ��͵�����Ϊ��");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
void Find_x(int a[],int n)
{
    int x,find=0;
    printf("��������Ҫ���ҵķ�����");
    scanf("%d",&x);
    int i;
    for(i=0;i<n;i++)
    {
        if(x==a[i])
        {
            find=1;
            break;
        }
    }
    if(find)
    {
    printf("��%d��ͬѧ����Ҫ���ҵĳɼ�",i);
    }
    if(!find)
    {
        printf("��Щ�ɼ���û�������ҵģ�");
    }
}

void Average(int a[],int n)
{
    int i,sum=0;
    float ave;
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    ave=(float)sum/n;
    printf("ƽ����Ϊ%f",ave);
}
