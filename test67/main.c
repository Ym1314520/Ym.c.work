#include <stdio.h>
#include <stdlib.h>

//int main()
//{
//    int temp[5]={1,2,3,4,5};//数组指针
//    int (*p)[5]=&temp;
//    for(int i=0;i<5;i++)
//    {
//        printf("%d\n",*(*p+i));
//    }
//    return 0;
//}

void main()
{
    int a=1;//指针数组
    int b=2;
    int c=3;
    int *p[3]={&a,&b,&c};
    int i;
    for(i=0;i<3;i++)
    {
        printf("%d\n",*p[i]);
    }
}
