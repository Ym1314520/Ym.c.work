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
//    scanf("%d",pa);//�������ַ��Ӧ�ĵĿռ����ֵ
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
//    printf("������a,b:");
//    scanf("%d,%d",&a,&b);
//    printf("����ǰ��a,bֵ��Ϊ:%d,%d\n",a,b);
//    Swap(&a,&b);
//    printf("�������a,bֵ��Ϊ:%d,%d\n",a,b);
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
