#include<stdio.h>
int main()
{
    int cock,hen,chicken,n;
    for(n=1;n<=4;n++)
    for(cock=0;cock<=20;cock++)
    for(hen=0;hen<=33;hen++)
    for(chicken=0;chicken<=100;chicken++)
    if(cock*5+3*hen+chicken/3==100&&chicken+cock+hen==100&&chicken%3==0)
        break;
    {
        printf("%2d:cock=%2d hen=%2d chicken=%2d\n",n,cock,hen,chicken);
    }
    return 0;
}
