//(1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)
#include<stdio.h>
main()
{
	int n=10,i;
	for(i=1;i<=n;i++)
	{
		printf("(%d*%d)+",i,i);
	}
}
