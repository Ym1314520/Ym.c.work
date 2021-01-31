#include <stdio.h>
#include <stdlib.h>
//
//int main()
//{
//    int a,b,c;
//    printf("请输入a,b,c的值：");
//    scanf("%d,%d,%d",&a,&b,&c);
//    int *p1[5];
//    for(int i=0;i<5;i++){
//        printf("请输入要存的地址：");
//        scanf("%p",p1[i]);
//    }
//    for(int j=0;j<5;j++){
//    printf("%d",*p1[j]);
//    }
//    return 0;
//}

//void main(){
//int a,b,c;
//printf("请输入abc：");
//scanf("%d,%d,%d",&a,&b,&c);
//int *p1[5]={&a,&b,&c};
//for(int i=0;i<5;i++)
//{
//printf("%d\t",*p1[i]);
//}
//}

void main()
{
    char *p1[3]={"everything is possible","nothing can stop me","yuyu is the best!"};
    int i;
    for(i=0;i<3;i++)
    {
        printf("%s\n",p1[i]);
    }
}
