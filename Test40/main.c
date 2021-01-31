#include<stdio.h>
#include<stdlib.h>
#define size 10
//void main()//冒泡排序
//{
//    printf("输入十个数据：");
//int a[10],i,j,t;
//for(i=0;i<10;i++)
//{
//    scanf("%d",&a[i]);
//}
//for(i=0;i<9;i++)
//{
//for(j=0;j<10-i-1;j++)
//{
//    if(a[j]>a[j+1])
//    {
//        t=a[j];
//        a[j]=a[j+1];
//        a[j+1]=t;
//    }
//}
//}
//for(i=0;i<10;i++)
//{
//printf("%d\t",a[i]);
//}
//
//}
//void main()//选择排序
//{
//    int i,j,a[size],t;
//    printf("输入十个数据：");
//    for(i=0;i<size;i++)
//    {
//        scanf("%d",&a[i]);
//    }
//for(i=0;i<size;i++)
//{
//    for(j=i+1;j<size;j++)
//    {
//        if(a[i]>a[j])
//        {
//            t=a[i];
//            a[i]=a[j];
//            a[j]=t;
//        }
//    }
//}
//for(i=0;i<size;i++)
//{
//    printf("%d\t",a[i]);
//}
//}
void main()
{
    int i,j,a[size];
    for(i=0;i<size;i++)
    {
        printf("Input:");
        scanf("%d",&a[i]);
        if(a[i]<0)
        {
            printf("Reput:");
            scanf("%d",&a[i]);
         continue;
        }

    }
    for(i=0;i<size;i++)
    {
        printf("%d\t",a[i]);
    }
}
