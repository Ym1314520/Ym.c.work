#include <stdio.h>
#include <stdlib.h>
#define number 3
void addbook(long n[],int m[]);
void delebook(long n[],int m[]);
void modibook(long n[],int m[]);
void findbook(long n[],int m[]);
void main()
{
    printf("欢迎使用鱼鱼摸鱼的图书管理系统！\n");
    do{
    printf("请选择你要使用的功能.");
    printf("1--添加图书书号 2--删除图书 3--修改图书 4--查找图书 0--退出\n");
    int i,choose;
    long n[number];
    int m[number];
    char a;
    scanf("%d",&choose);
    switch(choose)
    {
    case 1:
        addbook(n,m);
        break;
    case 2:
        delebook(n,m);
        break;
    case 3:
        modibook(n,m);
        break;
    case 4:
        findbook(n,m);
        break;
    case 0:
        printf("感谢您的本次使用，我们会继续改进的！");
        exit(0);
    }
}while(1);

}

void addbook(long n[],int m[number])
{
    int i;
    for(i=0;i<number;i++)
    {
        printf("请输入你的书号：\n");
        scanf("%ld",&n[i]);
        printf("请输入你要添加的这本书的数量！\n");
        scanf("%d",&m[i]);
    }
    for(i=0;i<number;i++)
    {
    printf("已成功录入书号为：%d的书:%d本\n",n[i],m[i]);
    }
}

void delebook(long n[],int m[])
{
    long num;
    printf("请输入你要删除的图书书号：\n");
    scanf("%ld",&num);
    int i,pos,find=0;
    for(i=0;i<number;i++)
    {
        if(num==n[i])
        {
            pos=i;
            find=1;
            break;
        }
    }
    if(find==0)
    {
        printf("没有找到这本书！");
    }
    else{
    for(i=pos;i<number-1;i++)
    {
        n[i]=n[i+1];
        m[i]=m[i+1];
    }
    printf("现在书库中现有的书籍书号为：\n");
    for(i=0;i<number-1;i++)
    {
        printf("%ld\n",n[i]);
    }
    }
}

void modibook(long n[],int m[])
{
    printf("输入你想修改的图书书号：\n");
    long num;
    scanf("%ld",&num);
    int i,pos,find=0;
    for(i=0;i<number;i++)
    {
        if(num==n[i])
        {
            pos=i;
            find=1;
            break;
        }
    }
    if(find==0)
    {
        printf("没有找到这本书！\n");
    }
    else{
    printf("书号为%ld的图书此时还剩%d本\n",num,m[i]);
    printf("你想修改为多少本？\n");
    int x;
    scanf("%d",&x);
    m[pos]=x;
    printf("修改后，书号为%ld的图书此时还剩%d本\n",num,m[pos]);
    }
}

void findbook(long n[],int m[])
{
    int i,find=0;
    long num;
    printf("请输入你要查找到图书书号：\n");
    scanf("%ld",&num);
    for(i=0;i<number;i++)
    {
        if(num==n[i])
        {
            printf("找到这本书，还剩%d本\n",m[i]);
            find=1;
            break;
        }
    }
    if(find==0)
    {
    printf("没找到这本书，太遗憾了!\n");
    }
}
