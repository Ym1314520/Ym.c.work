#include <stdio.h>
//int x=0,y=3;
//void fun()
//{
//x+=y++;
//
//}
//void main()
//{
//    int i;
//    for(i=1;i<4;i++)
//    {
//        fun();
//printf("%d,%d\t",x,y);
//    }
void main()
{
//    char str[123];
//    scanf("%s",str);
//    printf("%s",str);
char str[]="I love you jh!";
char *inget=str;
int count=0;
while(*inget++ != '\0')
{
    count++;
}
printf("count=%d",count);
}
