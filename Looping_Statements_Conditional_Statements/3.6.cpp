//WAP to print Fibonacci series up to given numbers


#include<stdio.h>
main()
{
	int number,i,b=1,a=0,c;
	printf("\n\t Enter number :");
		scanf(" %d",&number);
	i=0;
	
	
	while(i<=number)
	{
		printf("%d,",c);
		a=b;
		b=c;
		c=a+b;
		i++;
	}
	
}
