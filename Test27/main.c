#include <stdio.h>
 long Factorial(unsigned int n)
{
	if (n<=0)
	{
		return -1;
	}
	else if (n==1)
	{
		return 1;
	}
	else
	{
		return n * Factorial(n-1);
	}
}
int main()
{
        int n;
	unsigned long x;
	printf("Input n:\n");
	scanf("%d", &n);
	x = Factorial(n);
	printf("%d!=%ld\n", n, x);
	return 0;
}
