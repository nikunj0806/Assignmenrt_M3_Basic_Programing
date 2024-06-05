/*Write a program you have to make a summation of first and last
Digit. (E.g.,
1234 Ans: -5)*/
#include<stdio.h>
main()
{
	long int n,a,b,num=0;
	printf("\n\n\t Input a number  : ");
	scanf("%d",&n);
	a=n%10;
	while(n!=0)
	{
		b=n%10;
		
		n=n/10;	
	}
	
	printf("\n\n\t summation Number = %d",a+b);
}
