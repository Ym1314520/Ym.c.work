#include <stdio.h>
#include <stdlib.h>

int main()
{
    int p[4][5]={0};
    int k=0;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<5;j++)
        {
            p[i][j]=k++;
        }
    }
    printf("%p\n",p);
    printf("%d\n",**(p+1));
    printf("%p\n",p[1]);
    return 0;
}
