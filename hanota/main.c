#include <stdio.h>
#include <stdlib.h>
void hannoi(int n,char x,char y,char z);
int main()//汉诺塔游戏
{
    int n;
    printf("请输入要移动的块数：\n");
    scanf("%d",&n);
    hannoi(n,'X','Y','Z');
    return 0;
}
void hannoi(int n,char x,char y,char z)
{
    if(n==1)
    {
        printf("%c-->%c\n",x,z);
    }
    else
    {
        hannoi(n-1,x,z,y);
        printf("%c-->%c\n",x,z);
        hannoi(n-1,y,x,z);
    }
}
