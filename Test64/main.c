#include <stdio.h>
#include <stdlib.h>
#define size 5

void main()
{
    int i=0;
int number[size];
int find=0;//Ϊ�٣�����û�ҵ�
for(i=0;i<size;i++)
{
    scanf("%d",&number[i]);
}
do
{
    if(number[i]==3)
    {
        find=1;
    }
    i++;
}while(!find);
printf("zhaodaole!");
}

