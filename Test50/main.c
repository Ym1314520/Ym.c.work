#include <stdio.h>
#include <stdlib.h>
#define size 5
//int mode_num(int a[]);//�ҵ�����
//void main()//����������
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
//    for(i=0;i<size;i++)//����ѭ����ͳ�Ƶ�n���������˼���
//    {
//        count=0;
//        for(j=i+1;j<size;j++)//ͳ�Ƴ��ִ���
//        {
//            if(a[i]==a[j])
//            {
//                count++;
//            }
//        }
//        b[i]=count;//��ÿ�������ֵĴ����洢������
//    }
//    int max=0;
//    for(i=0;i<size;i++)//����b[]�д��������ݱȽϣ��ҵ����
//    {
//    if(b[max]<b[i])
//    {
//        max=i;
//    }
//    }
//    return max;
//}


//int Find_x(int n[],int x);//�ҵ�x���±�
//void main()//���뼸�����ݲο�
//{
//printf("Enter 5 digital:");
//int n[size],i,find;
//for(i=0;i<size;i++)
//{
//    scanf("%d",&n[i]);
//}
//printf("Enter x:");//���������
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
//int Find_x(int n[],int x)//���������ķ��ط�ʽ�������voidֱ���ڶ��庯�����������Ϊ�����޷��ж�-1
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
//printf("����һ��8λ��������num��");
//scanf("%ld",&num);
//int i,a[8];
//for(i=0;i<8;i++)//8λ���ݷֱ����a[]��
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
