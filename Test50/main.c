#include <stdio.h>
#include <stdlib.h>
#define size 5
//int mode_num(int a[]);//找到众数
//void main()//输入数据们
//{
//int a[size];
//int i,max;
//for(i=0;i<size;i++)
//{
//    scanf("%d",&a[i]);
//}
//max=mode_num(a);
//printf("%d",a[max]);
//}
//int mode_num(int a[])
//{
//    int count,i,b[size],j;
//    for(i=0;i<size;i++)//计数循环，统计第n个数出现了几次
//    {
//        count=0;
//        for(j=i+1;j<size;j++)//统计出现次数
//        {
//            if(a[i]==a[j])
//            {
//                count++;
//            }
//        }
//        b[i]=count;//将每个数出现的次数存储在里面
//    }
//    int max=0;
//    for(i=0;i<size;i++)//导出b[]中次数的数据比较，找到最大
//    {
//    if(b[max]<b[i])
//    {
//        max=i;
//    }
//    }
//    return max;
//}


//int Find_x(int n[],int x);//找到x的下标
//void main()//输入几个数据参考
//{
//printf("Enter 5 digital:");
//int n[size],i,find;
//for(i=0;i<size;i++)
//{
//    scanf("%d",&n[i]);
//}
//printf("Enter x:");//输入查找数
//int x;
//scanf("%d",&x);
//find=Find_x(n,x);
//if(find==-1)
//{
//    printf("Not found!");
//}
//else
//{
//printf("%d",find);
//}
//
//}
//int Find_x(int n[],int x)//并不完美的返回方式，最好用void直接在定义函数中输出，因为这样无法判断-1
//{
//    int i;
//    for(i=0;i<size;i++)
//    {
//        if(n[i]==x)
//        {
//            return i;
//        }
//    }
//    return -1;
//}


//void symmetry_num(int a[]);
//void main()
//{
//long num;
//printf("输入一个8位长整型数num：");
//scanf("%ld",&num);
//int i,a[8];
//for(i=0;i<8;i++)//8位数据分别存入a[]中
//{
//    if(num>0)
//    {
//        a[i]=num%10;
//        num=num/10;
//    }
//    else
//    {
//        break;
//    }
//}
//symmetry_num(a);
//}
//void symmetry_num(int a[])
//{
//    int i;
//    for(i=0;i<8/2;i++)
//    {
//        if(a[i]!=a[8-1-i])
//        {
//            printf("Not symmetry!");
//            exit(0);
//        }
//    }
//    printf("Yes!you have success!");
//
//}
