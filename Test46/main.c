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
        printf("\n请输入：1--求平均值,2--排序,3--查找,4--求最高分,0--退出.\n");
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
            printf("谢谢您的使用，再见！");
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
    printf("请输入第%d号学生的成绩",i+1);
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
    printf("学生中成绩最高的是%d号学生，成绩为：%d",max,a[max]);
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
    printf("成绩由高到低的排序为：");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
void Find_x(int a[],int n)
{
    int x,find=0;
    printf("请输入你要查找的分数：");
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
    printf("第%d号同学是你要查找的成绩",i);
    }
    if(!find)
    {
        printf("这些成绩里没有你想找的！");
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
    printf("平均分为%f",ave);
}
