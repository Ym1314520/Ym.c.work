#include<stdio.h>
#include<stdlib.h>
#define N 40
int ReadScore(int score[]);
int fun(int score[], int m, int below_score[], int below_index[]);
void main()
{
    int score[N],below_index[N],below_n,below_score[N];
    int i,n=0;
    for(i=0;i<=N;i++)
    {
        scanf("%d", &score[i]);
        if(score[i]<0)
        {
            break;
        }
        n++;
    }
    if (n == 0) //1
    {
        printf("there are no valid scores\n");
        exit(0);
    }
    printf("the number of the class:%d\n", n);
    below_n=fun(score,n,below_score,below_index);
     printf("the number under the average score: %d\n", below_n);
      for (i = 0; i < below_n; i++)
    {
        printf("the %dth score is: %d\n", below_index[i]+1, below_score[i]); //1
    }



}
int fun(int score[], int m, int below_score[], int below_index[])
{
    int i,count=0,j=0;
    float ave,sum=0;
    for(i=0;i<m;i++)
    {
        sum=sum+score[i];
    }
    ave=sum/m;
    for(i=0;i<m;i++)
    {
        if(score[i]<ave)
        {
            below_index[j]=i;
            below_score[j]=score[i];
            count++;
            j++;
        }
    }
    return count;

}

