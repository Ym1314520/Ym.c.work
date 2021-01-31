#include<stdio.h>
#define Students 40
float AverofCourse(int score[],int n);
int SumofCourse(int score[],int n);
void main()
{
    int i,n,sum[Students],mt[Students],en[Students],ph[Students];
    long int id[Students];
    float aver[Students];
    printf("Input the total number of the students(n<=40):");
    scanf("%d",&n);
    printf("Input student¡¯s ID and score as: MT  EN  PH:\n");
    for(i=0;i<n;i++)
    {
    scanf("%ld",&id[i]);
    scanf("%d",&mt[i]);
    scanf("%d",&en[i]);
    scanf("%d",&ph[i]);
    sum[i]=mt[i]+en[i]+ph[i];
    aver[i]=(float)sum[i]/3;
    }
    printf("Counting Result:\n");
    printf("Student¡¯s ID\t  MT \t  EN \t  PH \t SUM \t AVER\n");
    for(i=0;i<n;i++)
    {
        printf("%12ld\t",id[i]);
        printf("%4d\t%4d\t%4d\t",mt[i],en[i],ph[i]);
        printf("%4d\t%5.1f\n",sum[i],aver[i]);
    }
    printf("SumofCourse \t");
    printf("%4d\t",SumofCourse(mt,n));
    printf("%4d\t",SumofCourse(en,n));
    printf("%4d\t",SumofCourse(ph,n));
    printf("\nAverofCourse\t");
    printf("%4.1f\t",AverofCourse(mt,n));
    printf("%4.1f\t",AverofCourse(en,n));
    printf("%4.1f\t",AverofCourse(ph,n));
}
int SumofCourse(int score[],int n)
{
    int j,summ=0;
    for(j=0;j<n;j++)
    {
        summ=summ+score[j];
    }
    return summ;
}
float AverofCourse(int score[],int n)
{
    int j,summ=0;
    float ave;
    for(j=0;j<n;j++)
    {
        summ=summ+score[j];
    }
    ave=(float)summ/n;
    return ave;
}
