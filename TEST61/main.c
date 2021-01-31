#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//
//int main()//第一章
//{
//int student_score[][];//标识符的命名规则p12
//int i;
//float a;//关键字float p11
//int i=1;//定义的同时赋值
//    return 0;
//}


//void main()//第二章
//{
//    int a=3;
//    double b=2.6986798777;
//    char c='A';
////    printf("A----------   %d",sizeof(c));
//    a+=a-=a*a;//多重运算考虑是左结合还是右结合以及运算的优先级
//    printf("%d\t",a);//一般取反大于括号大于乘除运算大于加减运算
//    a+=a-=(a*=a);
//    printf("%d",a);
////    printf("%c",c);
////    printf("%lf",b);

//float a;//考点一：float和double位数精度的不同
//double b;
//a=123456.789e4;
//b=123456.789e4;
//printf("%f\n%f\n",a,b);
//}

//void main()//第三章
//{
//int a,b;//考点二：取余和除法的区别，取余与取数符号相同，除法依照算数来看
//a=11;
//b=-5;
//printf("%d\t %d",a/b,a%b);


//const double PI=314159e-5;//圆的面积，宏常量和const的使用方法
//printf("请输入r：");
//double r;
//float area,cir;
//scanf("%lf",&r);
//printf("area=%f",PI*r*r);
//printf("cir=%f",PI*r*2);

//float a,b,c,s,area;//数学函数引入，用海伦公式计算三角形面积
//printf("a,b,c:");
//scanf("%f %f %f",&a,&b,&c);
//s=(a+b+c)/2.0;
//area=sqrt(s*(s-a)*(s-b)*(s-c));
//printf("%f",area);
//}

void main()//第四章
{
//    char n='\f';
//    printf("%c",n);

//int n;
//n=getchar();
//putchar(n);
//n=getchar();
//putchar(n);
//for(int i=1;i<100;i++)//用getchar实现了打印一句话
//{
//      n=getchar();
//      putchar(n);
//}
//char a='A',b='B';//字符可以运算，用其对应的ascii码运算
//printf("%10d",b-a);
//int a,b;
//char c;
//scanf("%d%*c%d",&a,&b);
//printf("a=\"%d\",b=\"%d\"",a,b);
//printf("%d\t%d",a,b);

char op;
int a,b;
scanf("%d%c%d",&a,&op,&b);
printf("%d%c%d=%d",a,op,b,a+b);
}
