#include<stdio.h>
main()
{
    char A,B,C;
    char x,y,z;
    for(A=x;A<=z;A++)
        {
    for(B=x;B<=z;B++)
    {
    for(C=x;C<=z;C++)
    {
        if(A!=B&&A!=C&&B!=C)
        {
        if(A!=x&&B!=x&&B!=z)
        {
            printf("a--%c\tb--%c\tc--%c\n",A,B,C);
        }
        }
    }
    }
    }
}
