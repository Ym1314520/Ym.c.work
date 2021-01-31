#include <stdio.h>
#include <stdlib.h>

void main()
{
    char *n[1][4]={"goood","excellent","common","false"};
    int i;
    for(i=0;i<4;i++)
    {
    printf("%s\n",n[0][i]);
    }
}
