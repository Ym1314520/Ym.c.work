#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//
//int main()//��һ��
//{
//int student_score[][];//��ʶ������������p12
//int i;
//float a;//�ؼ���float p11
//int i=1;//�����ͬʱ��ֵ
//    return 0;
//}


//void main()//�ڶ���
//{
//    int a=3;
//    double b=2.6986798777;
//    char c='A';
////    printf("A----------   %d",sizeof(c));
//    a+=a-=a*a;//�������㿼�������ϻ����ҽ���Լ���������ȼ�
//    printf("%d\t",a);//һ��ȡ���������Ŵ��ڳ˳�������ڼӼ�����
//    a+=a-=(a*=a);
//    printf("%d",a);
////    printf("%c",c);
////    printf("%lf",b);

//float a;//����һ��float��doubleλ�����ȵĲ�ͬ
//double b;
//a=123456.789e4;
//b=123456.789e4;
//printf("%f\n%f\n",a,b);
//}

//void main()//������
//{
//int a,b;//�������ȡ��ͳ���������ȡ����ȡ��������ͬ������������������
//a=11;
//b=-5;
//printf("%d\t %d",a/b,a%b);


//const double PI=314159e-5;//Բ��������곣����const��ʹ�÷���
//printf("������r��");
//double r;
//float area,cir;
//scanf("%lf",&r);
//printf("area=%f",PI*r*r);
//printf("cir=%f",PI*r*2);

//float a,b,c,s,area;//��ѧ�������룬�ú��׹�ʽ�������������
//printf("a,b,c:");
//scanf("%f %f %f",&a,&b,&c);
//s=(a+b+c)/2.0;
//area=sqrt(s*(s-a)*(s-b)*(s-c));
//printf("%f",area);
//}

void main()//������
{
//    char n='\f';
//    printf("%c",n);

//int n;
//n=getchar();
//putchar(n);
//n=getchar();
//putchar(n);
//for(int i=1;i<100;i++)//��getcharʵ���˴�ӡһ�仰
//{
//      n=getchar();
//      putchar(n);
//}
//char a='A',b='B';//�ַ��������㣬�����Ӧ��ascii������
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
