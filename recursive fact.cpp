#include<stdio.h>
int f(int);
main()
{
	int n,fact;
	scanf("%d",&n);
	fact=f(n);
	printf("%d",fact);
}
int f(int n)
{
	if(n>1)
    return n*f(n-1);
    else
    return 1;
}

