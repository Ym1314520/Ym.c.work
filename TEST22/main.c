#include<stdio.h>
int main(void)
{
    int score[5];
    int totalScore=0;
    int i;
    printf("Input the scores of five students:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&score[i]);
        totalScore=totalScore+score[i];
    }
    printf("%d",totalScore);
    return 0;
}



