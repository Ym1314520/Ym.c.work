#include<stdio.h>
main()
{
    int n,i=0,j=0;
printf("Please enter the number:\n");
do{
scanf("%d",&n);
if(n==-1)
        {
            printf("over!\n");
        }
}while(n==-1);
    do{
        if(n%2!=0&&n!=-1)
        {
            printf("%d:odd\n",n);
            i++;
        }
        if(n%2==0&&n!=-1)
        {
            printf("%d:even\n",n);
            j++;
        }
       scanf("%d",&n);
    }while(n!=-1);
    printf("The total number of odd is %d\n",i);
    printf("The total number of even is %d\n",j);
}
