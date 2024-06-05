//C Program to Reverse a Number Using FOR Loop
#include<stdio.h>
main()
{
	int n=6877,i,a,b=0;
	
	for(i=1;n!=0;n=n/10)
	{
		a=n%10;
		b=b*10+a;
		
		
		
	}
	printf("\n\n\t Reverse number %d ",b);
}
