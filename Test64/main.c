#include <stdio.h>
#include <stdlib.h>
#define size 5

void main()
{
    int i=0;
int number[size];
int find=0;//为假，就是没找到
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

