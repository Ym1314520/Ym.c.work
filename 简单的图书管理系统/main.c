#include <stdio.h>
#include <stdlib.h>
#define number 3
void addbook(long n[],int m[]);
void delebook(long n[],int m[]);
void modibook(long n[],int m[]);
void findbook(long n[],int m[]);
void main()
{
    printf("��ӭʹ�����������ͼ�����ϵͳ��\n");
    do{
    printf("��ѡ����Ҫʹ�õĹ���.");
    printf("1--���ͼ����� 2--ɾ��ͼ�� 3--�޸�ͼ�� 4--����ͼ�� 0--�˳�\n");
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
        printf("��л���ı���ʹ�ã����ǻ�����Ľ��ģ�");
        exit(0);
    }
}while(1);

}

void addbook(long n[],int m[number])
{
    int i;
    for(i=0;i<number;i++)
    {
        printf("�����������ţ�\n");
        scanf("%ld",&n[i]);
        printf("��������Ҫ��ӵ��Ȿ���������\n");
        scanf("%d",&m[i]);
    }
    for(i=0;i<number;i++)
    {
    printf("�ѳɹ�¼�����Ϊ��%d����:%d��\n",n[i],m[i]);
    }
}

void delebook(long n[],int m[])
{
    long num;
    printf("��������Ҫɾ����ͼ����ţ�\n");
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
        printf("û���ҵ��Ȿ�飡");
    }
    else{
    for(i=pos;i<number-1;i++)
    {
        n[i]=n[i+1];
        m[i]=m[i+1];
    }
    printf("������������е��鼮���Ϊ��\n");
    for(i=0;i<number-1;i++)
    {
        printf("%ld\n",n[i]);
    }
    }
}

void modibook(long n[],int m[])
{
    printf("���������޸ĵ�ͼ����ţ�\n");
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
        printf("û���ҵ��Ȿ�飡\n");
    }
    else{
    printf("���Ϊ%ld��ͼ���ʱ��ʣ%d��\n",num,m[i]);
    printf("�����޸�Ϊ���ٱ���\n");
    int x;
    scanf("%d",&x);
    m[pos]=x;
    printf("�޸ĺ����Ϊ%ld��ͼ���ʱ��ʣ%d��\n",num,m[pos]);
    }
}

void findbook(long n[],int m[])
{
    int i,find=0;
    long num;
    printf("��������Ҫ���ҵ�ͼ����ţ�\n");
    scanf("%ld",&num);
    for(i=0;i<number;i++)
    {
        if(num==n[i])
        {
            printf("�ҵ��Ȿ�飬��ʣ%d��\n",m[i]);
            find=1;
            break;
        }
    }
    if(find==0)
    {
    printf("û�ҵ��Ȿ�飬̫�ź���!\n");
    }
}
