#include <stdio.h>
#include <stdlib.h>
#define N 40
void Swap(int *a,int *b);
int ReadScore(int score[]);
//void fun(int *pa);
//int main()
//{
//    int a=1;
//    int *pa=&a;
//    scanf("%d",pa);//在这个地址对应的的空间输出值
//    printf("%d\n", *pa);
//    fun(pa);
//    return 0;
//}
//
//void fun(int *pa){
//*pa=3;
//printf("%d\n",*pa);
//}
//void main()
//{
//    int a,b;
//    printf("请输入a,b:");
//    scanf("%d,%d",&a,&b);
//    printf("交换前的a,b值各为:%d,%d\n",a,b);
//    Swap(&a,&b);
//    printf("交换后的a,b值各为:%d,%d\n",a,b);
//}
//
//void Swap(int *a,int *b)
//{
//    int temp;
//    temp=*a;
//    *a=*b;
//    *b=temp;
//}


void main()
{
    int score[N],n;
    n=ReadScore(score);
    printf("%d",n);
}

int ReadScore(int score[])
{
    int i=-1;
    do{
        i++;
        printf("Input score:\n");
        scanf("%d",&score[i]);

    }while(score[i]>=0);
    return i;
}
