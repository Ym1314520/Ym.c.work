#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=1;
    while(i<=3)
    {if(i>=2)
    {
        continue;
    }
    i++;
    }
    printf("%d",i);
    return 0;
}
